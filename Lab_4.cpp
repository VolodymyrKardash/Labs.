#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(int argc, char** argv[])
 {
	double x,xk,dx,y;
	cout<<"Pochatkova tochka =";
	cin>>x;
	cout<<"kinceva tochka    =";
	cin>>xk;
	if (x>xk)
	cout<<"dani vvedeno nevirno"<<endl;
	cout<<"krok              =";
	cin>>dx;
	if (dx<=0)
	cout<<"dani vvedeno nevirno"<<endl;
	while(x<=xk)
{x+=dx;
y=sqrt(x+2)+pow(x,3)+exp(x);
cout<<"X="<<x<<endl;
cout<<"Y="<<y<<endl;
}
system("PAUSE");
return EXIT_SUCCESS;
}
