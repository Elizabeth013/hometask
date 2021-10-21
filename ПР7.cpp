#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int **f(int &n) {
    cout<<"n= ";
    cin>>n;
    int **a=new int*[n];
    for(int i=0;i<n;i++)  a[i]=new int[n-i];
	for(int i=0;i<n;i++) {
    	for(int j=0;j<n-i;j++) a[i][j]=rand()%100;
	}
    return a;
}
void print(int n, int **a) {
    for(int i=0;i<n;i++) {
            for(int g=0;g<i;g++) cout<<"     ";
            for(int j=0;j<n-i;j++) cout<<setw(4)<<a[i][j]<<" ";
            cout<<endl;
    }
}

int *find(int n, int **a, int i1, int j1) {
    int local=0;
    int *p=&local;
	if(i1<n && j1>=i1&&j1<n) {
        j1=j1-i1;
        p=&a[i1][j1];
    }
    return p;
}

int main() {
	srand(time(0));
    int **a; int n;
    a=f(n);
    print(n,a);
    int i1,j1;
    cout<<"i="; 
	cin>>i1;
    cout<<"j="; 
	cin>>j1;
    int *p=find(n,a,i1,j1);
    cout<<" adress "<<p<<endl<<" value "<<*p;

    for(int i=0;i<n;i++) delete []a[i];
	delete []a;
    return 1;
}
