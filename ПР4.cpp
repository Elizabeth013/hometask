#include <iostream>
using namespace std;

int main() {
	int n,m;
	setlocale (LC_ALL,"Russian");
	cout<<"������� ���������� ����� � �������� ";
	cin>>n>>m;;
	int **arr = new int* [n];
	for (int i=0;i<n;i++) {
		arr [i]=new int [i+1];
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			cout<<&arr[i][j]<<" ";
		}
		cout<<endl;
	}
	for (int i=0;i<n;i++) {
		delete [] arr [i];
	}
	return 1;
}
// ����� ���������� �������� ������� �� ����������� ���������� �� 4 ����� (��� ��� ���������� ��� int) (16 ��)
