#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void input(int &n,int *a) {
     do {
        cout<<"n="; cin>>n;
        if(n<=0) cout<<"error!";
	} while(n<=0);
	//1-alive; 0-dead
    for (int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
    	*(a+i*n+j)=rand()%2;
    	}	
	}
}

void output(int n, int *a) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
        cout<<setw(3)<<*(a+i*n+j)<<" ";
        }
		cout<<endl;
    }
}

bool step(int n, int *a)
{
    bool p=false;
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
        {
            int k=0;
            int i1,i2,j1,j2;
            i1=(i+n-1)%n;
            i2=(i+n+1)%n;
            j1=(j+n-1)%n;
            j2=(j+n+1)%n;

            if(*(a+i1*n+j)==1) k++;
            if(*(a+(i2)*n+j)==1) k++;
            if(*(a+(i)*n+j1)==1) k++;
            if(*(a+(i)*n+j2)==1) k++;
            if(*(a+(i1)*n+j1)==1) k++;
            if(*(a+(i1)*n+j2)==1) k++;
            if(*(a+(i2)*n+j1)==1) k++;
            if(*(a+(i2)*n+j2)==1) k++;
            
			if(*(a+i*n+j)==1) {
                if(!(k==2 || k==3)) {
                *(a+i*n+j)=0; p=true;
				}
			}
            else {
			if(k==3){
                *(a+i*n+j)=1; p=true;
                }
            }
        }
    return p;
}
int main()
{
    int n;
    int *a=new int [n*n];
    input(n,a);
    cout<<"Matrix:"<<endl;
    output(n,a);
    bool p;
    do {
        p=step(n,a);
       cout<<"Matrix:"<<endl;
       if(p) output(n,a);

    }while (p);
    delete [] a;
    return 1;
}
