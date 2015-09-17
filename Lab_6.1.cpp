#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{ double a[100];
int i,k=0;
   for(i=0; i<20; i++)
 { cout<<"a["<<i+1<<"]="; cin>>a[i];}
  for(i=0; i<20; i++)
  { if(a[i]<0) k++;}
   cout<<"count="<<k<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
