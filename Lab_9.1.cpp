#include <iostream>
#include <math.h>
#define p(k) ((asin(a*k))+(atan(k)))
using namespace std;
int main(int argc, char *argv[]) 
{
	double a,x,y,z,F;
	cout<<"Vvedit zminni:"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	cout<<"z=";
	cin>>z;
	F=tan(p(x))+(pow(sin(p(y)),2))/(cos(p(z)));
	cout<<"F="<<F<<endl;
	return 0;
}
