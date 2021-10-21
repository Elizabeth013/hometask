#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;


int *f(int &n) {
    cout<<"n= ";
    cin>>n;
    int *a=new int[n];
	for(int i=0;i<n;i++) a[i]=rand()%100-50;
    return a;
}

void print(int n, int *a) {
    for(int i=0;i<n;i++) {
	cout<<a[i]<<" ";
  }
}
//ascending sort
bool cmp(int a,int b) {
    return a>b;
}
//descending sort
bool cmp2(int a,int b){
    return a<b;
}

void sort(int *a, int n, bool (*cmp)(int , int)) {
    int temp, item; 
    for (int i=1;i<n;i++) {
        temp = a[i]; 
        item = i-1; 
        while(item >= 0 && cmp(a[item], temp)) {
            a[item + 1] = a[item]; 
            a[item] = temp;
            item--;
        }
    }
}

int main() {
	srand(time(0));
    int *a; int n;
    a=f(n);
    print(n,a);
	sort(a,n,cmp);
    cout<<endl<<"Sort:"<<endl;
    print(n,a);

    sort(a,n,cmp2);
    cout<<endl<<"Sort2:"<<endl;
    print(n,a);
    
   delete []a;
    return 1;
}
