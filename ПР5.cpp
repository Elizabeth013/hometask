#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void output(int n, int *a) {
    cout<<"Array:"<<endl;
    for(int i=0;i<n;i++) cout<<*(a+i)<<"  ";
    cout<<endl;
}
void output_R(int n, int *a) {
    cout<<"Revers Array:"<<endl;
    for(int i=1;i<=n;i++) cout<<*(a+n-i)<<"  ";
    cout<<endl;
}
int main() {
    int n, *a;
   do{
        cout<<"n=";
		cin>>n;
        if(n<=0)cout<<"error!";
    }
    while(n<=0);
    a=new int[n];

    for(int i=0;i<n;i++) a[i]=i;
    output(n, a);
	output_R(n, a);
    delete []a;
    return 1;
}
