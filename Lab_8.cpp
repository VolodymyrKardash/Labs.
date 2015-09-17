#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) 
{
	cout<<"Vvedit' text:"<<endl;
	char t[100];
	gets(t);
	int i,k,j,strok;
	strok=strlen(t);
	cout<<"Slova, shcho potchynayutsia na 'c' i zakinchyuiutsia na 'a':"<<endl;
	for(i=0;i<strlen(t);i++)
{
if(t[i]=='c')
{
for(j=i;(t[j]!=' ');j++);
if(t[j-1]=='a'){for(k=i;k<j;k++)cout<<t[k];cout<<endl;}
for(j=i;(t[j]!='.');j++);
if(t[j-1]=='a'){for(k=i;k<j;k++)cout<<t[k];cout<<endl;}
for(j=i;(t[j]!=',');j++);
if(t[j-1]=='a'){for(k=i;k<j;k++)cout<<t[k];cout<<endl;}
for(j=i;(j!=strok);j++)for(k=i;k<=j;k++)if(t[k]==' ')goto label;
if(t[j-1]=='a'){for(k=i;k<j;k++)cout<<t[k];cout<<endl;}
label:;}
}
	
	return 0;
}
