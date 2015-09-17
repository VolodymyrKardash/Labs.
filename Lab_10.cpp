#include <iostream>
#include <math.h>
using namespace std;
double f1=1,f2=1,x[20];
void a()
{
	int i;
	for(i=0;i<=20;i++)x[i]=1;
}
void xfunction(int i,double a,double b, double c)
{
	x[i]*=sqrt(b+c)/pow(b,2);	
}
double Ffunction(double x,double a)
{
	f1*=x+a*sqrt(x);
	f2*=x;
	return f1*f2;
}
int main(int argc, char *argv[]) 
{
	double F;
	int i,j,m,n;
	a();
	cout<<"n=";
	cin>>n;
	cout<<"m=";
	cin>>m;
	double a,b[m][n],c;
	cout<<"a=";
	cin>>a;
	cout<<"c=";
	cin>>c;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			cout<<"b["<<i+1<<"]["<<j+1<<"]=";
			cin>>b[i][j];
		}
	
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			xfunction(i,a,b[i][j],c);
			F=Ffunction(x[i],a);
		}
	cout<<"F="<<F;
	return 0;
}
