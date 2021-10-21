#include <iostream>
using namespace std;

void compare (int *ptr1,char *ptr2, bool *ptr3,short *ptr4,long *ptr5,double *ptr6,long double *ptr7,int *ptr8) {
	cout<<"int"<<sizeof(int)<<endl<<"char"<<sizeof(char)<<endl
	<<"bool"<<sizeof(bool)<<endl<<"short"<<sizeof(short)<<endl
	<<"long"<<sizeof(long)<<endl<<"double"<<sizeof(double)<<endl<<"long double"<<sizeof(long double)<<endl;

}
int main() {
	int a,n;
	int arr [n];
	char b;
	bool c;
	short d;
	long e;
	double g;
	long double h;
	int *ptr1=&a;
	char *ptr2=&b;
	bool *ptr3=&c;
	short *ptr4=&d;
	long *ptr5=&e;
	double *ptr6=&g;
	long double *ptr7=&h;
	int *ptr8=&arr[n];
	cout<<"¬ведите переменные";
	cin>>a>>b>>c>>d>>e>>g>>h>>n;
	cout<<"¬ведите элементы массива";
	for (int i=0;i<n;i++) cin>>arr[i];
	cout<<"јдресса:"<<ptr1<<" "<<ptr2<<" "<<ptr3<<" "<<ptr4<<" "<<ptr5<<" "<<ptr6<<" "<<ptr7<<" "<<ptr8<<endl;
	compare (ptr1,ptr2, ptr3,ptr4,ptr5,ptr6,ptr7,ptr8);
	return 1;
}
