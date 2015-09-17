#include <iostream>
#include <__MyFun.h>
using namespace std;



int main() {
	setlocale (LC_ALL,"");
	int i,j;
	float **a;
    a = new float *[2];
    for (i =0; i<=2 ;i ++)
    a[i] = new float [2];
    float **b;
    b = new float *[2];
    for (i =0; i<=2; i ++)
    b[i] = new float [2];
    float **c;
    c = new float *[2];
    for (i =0; i<=2 ;i ++)
    c[i] = new float [2];
   
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    {
    	cout<<"A["<<i+1<<"]["<<j+1<<"]=";
    	cin>>a[i][j];
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
    	cout<<"B["<<i+1<<"]["<<j+1<<"]=";
    	cin>>b[i][j];
    }
    float det;
    det=sum_det(a,b,c);
    cout<<det;
    for(int i=0;i<=2;i++){cout<<endl;
   	for(int j=0;j<=2;j++)
   	cout<<c[i][j]<<"  ";}
   	
}
