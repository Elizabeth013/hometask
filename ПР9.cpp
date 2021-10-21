#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int *f(int &n) {
    cout<<"n= ";
    cin>>n;
    int *a=new int[n];

    for(int i=0;i<n;i++) a[i]=rand()%100;
    return a;
}
void swap(int &a,int&b) {
    int t=a; 
	a=b; 
	b=t;
}
void sort(int *a, int n) {
    
    int i = 0;
    int j = n - 1;

    int mid = a[n / 2];
    do {
        while(a[i] < mid) {
            i++;
        }
       
        while(a[j] > mid) {
            j--;
        }
        if (i <= j) {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if(j > 0) {
        sort(a, j + 1);
    }
    if (i < n) {
        sort(&a[i], n - i);
    }
}

void print(int n, int *a) {
    for(int i=0;i<n;i++)
        {
		  cout<<a[i]<<" ";
        }
}

int main() {
	srand(time(0));
    int *a; int n;
    a=f(n);
    print(n,a);
    sort(a,n);
    cout<<endl<<"Sort:"<<endl;
    print(n,a);

   delete []a;
    return 1;
}
