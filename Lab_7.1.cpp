#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    double A[10][10],min;
    int  i,j,k,m,n,l;
    cout<<"M="; cin>>m;
    cout<<"N="; cin>>n;
     for(i=0; i<m; i++)
     for(j=0; j<n; j++)
    { cout<<"A["<<i+1<<"]["<<j+1<<"]=";
     cin>>A[i][j];}
    for(i=0; i<m; i++)
    {
      for(j=0; j<n; j++)
      cout<<A[i][j]<<" ";
      cout<<endl;
    }
    min=A[0][0];
  k=0;
  l=0;
  for(i=0; i<m; i++)
  for(j=0; j<n; j++)
  if(min>A[i][j]) {min=A[i][j]; k=i; l=j;}
  cout<<"Min is A["<<k+1<<"]["<<l+1<<"]="<<min<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
