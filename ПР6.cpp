#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int cmp(int*p,int *q)
{
    return (p==q);
}

int main()
{
    int *p,  *q;
    int c=6, b=7;
    p=&c; 
	q=&b;
    cout<<endl<<"cmp(&c,&b)="<<cmp(p,q)<<endl;
    p=&c;
	q=&c;
    cout<<"cmp(&c,&c)="<<cmp(p,q)<<endl;
    return 1;
}
