#include <iostream>
#include <math.h>
using namespace std;
double p(double a,double k)
	{
		double p;
		p=acos(a*k)+asin(k);
		return p;
	}
int main(int argc, char *argv[]) 	
{
	double a,F,x,y,z;
	cout<<"Vvedit zminni:"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	cout<<"z=";
	cin>>z;
	F=tan(p(a,x))+(pow(sin(p(a,y)),2))/(cos(p(a,z)));
	cout<<"F="<<F<<endl;
	return 0;
}
