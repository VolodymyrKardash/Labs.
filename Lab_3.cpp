#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std; 

int main(int argc, char* argv[]) 
{double S,a;
	int n,i;
	cout<<"a="; 
	cin>>a;
	S=0;
	for (i=1;i<=18;i++)
	{S+=pow(a,i)+pow(i,a);
	}
	cout <<"Suma="<<S<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
	}
