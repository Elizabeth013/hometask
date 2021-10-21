#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int *f(int n)
{
    int *p=new int;
    *p=n;
    cout<<"p of integer is create"<<endl;
    return p;
}
int main()
{
	int n;
	cout<<"n=";
	cin>>n;
    cout<<*f(n)<<endl;
    int *u=f(n);
    cout<<*u; //указатель на функцию
    return 1;
}
