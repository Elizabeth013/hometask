#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void output(int n, int *a) {
    cout<<"Array:"<<endl;
    for(int i=0;i<n;i++) cout<<*(a+i)<<"  ";
    cout<<endl;
}

void ptintSTR(string s) {
    for(int i=0;i<=s.length();i++)
    cout<<*(&s[0]+i);
}
int main() {
    int n, *a;
   do{
        cout<<"n=";
		cin>>n;
        if(n<=0)   cout<<"error!";
    }
    while(n<=0);
    a=new int[n];

    for(int i=0;i<n;i++) a[i]=i;
    output(n, a);
    delete []a;

    string s;
    cout<<"String: ";
    cin>>s;
    ptintSTR(s);
    return 1;
}
