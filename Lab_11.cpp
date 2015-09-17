#include <iostream>
#include <stdio.h>
using namespace std;
void vviddanyh()
{
	
	int x;
	cout<<"Skilky fakultetiv vy hochete vvesty?"<<endl;
	cin>>x;
	char zabratyperenospiadka[1];
	gets(zabratyperenospiadka);//V mene cin stavyt perenos radka, yaki vvodytsia v nastupnyi pislia n'oho gets, tomu ya zrobyv gets dla toho, shcob zabraty vvid pustoho riadka
	FILE * dani;
	int i;
   char fakultet[50],kgryp[5],kstudentiv[5];
   dani = fopen ("dani.txt","at");
   for(i=0;i<x;i++)  
	{
		 puts("Nazva fakultetu:");
	     gets(fakultet);
	     fprintf (dani, "Fakultet (%s).",fakultet);
	     puts("Kilkist grup fakultetu:");
	     gets(kgryp);
	     fprintf (dani, "Kilkist grup (%s).",kgryp);
	     puts("Kilkist studentiv fakultetu");
	     gets(kstudentiv);
	     fprintf (dani, "Kilkist studentiv (%s).",kstudentiv);
 	}
   fclose (dani);
   cout<<"Vvid zaversheno"<<endl;
}


void ochystka()
{
	FILE * dani;
	dani = fopen ("dani.txt","wt");
	fclose (dani);
	cout<<"Ochystka zavershena"<<endl;
}

void chytanniadanyh()
{
	char stroka[9999];
	FILE * dani;
	dani = fopen ("dani.txt","rt");
	fgets(stroka,9999,dani);
	printf("%s\n",stroka);
	fclose (dani);
    cout<<"Chytannia zaversheno"<<endl;
}
int main(int argc, char *argv[]) 
{	
	int comanda;
	do
	{	
		cout<<"Vvedit komandu(1-vvid,2-ochystka,3-vyvid,4-vyhid):"<<endl;
		cin>>comanda;
		if(comanda==1)vviddanyh();
		if(comanda==2)ochystka();
		if(comanda==3)chytanniadanyh();
	}
	while(comanda!=4);
	cout<<"Programa vykonena."<<endl;
   return 0;
}
