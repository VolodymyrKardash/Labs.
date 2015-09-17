#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{ double a[100], b, max,f;
int i,k,c=0;
 cout<<"b="; cin>>b;
   for(i=0; i<20; i++)
 { cout<<"a["<<i+1<<"]="; cin>>a[i];}
 if(a[1]<0){ max=a[0];  k=0;}
  for(i=2; i<=20; i++)
  if(a[i]<0 && max<a[i]) {max=a[i]; k=i;}
  for(i=0; i<20; i++){
  if(a[i]>b) c++;}
  
   if (a[11]==b) cout<<"max="<<a[k]<<endl;
   else cout<<"c="<<c<<endl;
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
