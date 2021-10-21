#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
	int n;
	setlocale (LC_ALL, "Russian");
	srand(time(0));
	cout<<"¬ведите количество строк ";
	cin>>n;
	int **arr = new int* [n];
	for (int i=0;i<n;i++) {
		arr [i]=new int [i+1];
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cout<<setw(5)<<rand()%101<<" ";
		}
		cout<<endl;
	}
	for (int i=0;i<n;i++) {
		delete [] arr [i];
	}
	return 1;
}
