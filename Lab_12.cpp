#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct product
{ 
	char name[30];
	float weight;
	float price;
	int number;
};

FILE * fileprod;
const char filename[]="basa.bin";

 
void vvid()
{struct product a;
	fseek(fileprod,0,SEEK_END);
	cout<<"Ââåäiòü äàíi ïðî òîâàð"<<endl;
	cout<<"Íàçâà òîâàðó  :"; gets(a.name);
	cout<<"Âàãà òîâàðó   :"; cin>>a.weight;
	cout<<"Öiíà òîâàðó   :"; cin>>a.price;
	cout<<"Êiëüêiñòü     :"; cin>>a.number;cout<<endl;
	fseek(fileprod,0,2);
	fwrite(&a,sizeof(a),1,fileprod);
}


void vyvid(struct product a)
{
	cout<<"Íàçâà òîâàðó  :"<<a.name<<endl;
	cout<<"Âàãà òîâàðó(ã):"<<a.weight<<endl;
	cout<<"Öiíà òîâàðó   :"<<a.price<<endl;
	cout<<"Êiëüêiñòü     :"<<a.number<<endl;
}

void tzina()
{
 struct product a;
 int r;
 float zahal=0;
	fseek(fileprod,0,0);
	while (!feof(fileprod))
	{
		r=fread(&a,sizeof(a),1,fileprod);
		if (r<1) break;
		float numXpr;
		numXpr=a.price*a.number;
		zahal+=numXpr;
	}
	cout<<endl<<"Â áàçi º òîâàð(iâ) íà "<<zahal<<" ãðèâåíü!"<<endl<<endl;
}
 
void nailehshyi()
{
 struct product a;
 int r;
 float bufer;
 char nazva[30];
	fseek(fileprod,0,SEEK_SET);
	fread(&a,sizeof(a),1,fileprod);
	bufer=a.weight;
	while (!feof(fileprod))
	{
		r=fread(&a,sizeof(a),1,fileprod);
		if (r<1) break;
		
		if(bufer>a.weight)
		{
			bufer=a.weight;
			cout<<a.name;
			strcpy(nazva,a.name);	
		}
	}
	cout<<endl<<"Íàéëåãøèé òîâàð º "<<nazva<<"ç âàãîþ "<<bufer<<" ãðàì."<<endl<<endl;
} 
 
void vyvid_vsoho()
{
 struct product a;
 int p,r;
 	p=0;
	fseek(fileprod,0,0);
	cout<<"Âìiñò áàçè äàíèõ:"<<endl<<endl;
	while (!feof(fileprod))
	{
		r=fread(&a,sizeof(a),1,fileprod);
		if (r<1) break;
		vyvid(a);
		p++;
	}
	cout<<endl<<"Â áàçi º "<<p<<" òîâàð(iâ)!"<<endl<<endl;
}

 
void ochystka()
{
	fclose(fileprod);
	if ((fileprod=fopen(filename,"wb+"))==NULL)
 	{
 		cout<<"Ñòâîðèòè ôàéë áàçè äàíèõ íå âäàëîñü."<<endl;
	}
}


int main() 
{ 
	setlocale(LC_ALL,"");
	char c;
 	if ((fileprod=fopen(filename,"rb+"))==NULL)
 	{
 	if ((fileprod=fopen(filename,"wb+"))==NULL)
 	{
 		cout<<"Ñòâîðèòè ôàéë áàçè äàíèõ íå âäàëîñü."<<endl;
 		return -1;
	}
		cout<<"Ñòâîðåíî íîâèé ôàéë áàçè äàíèõ."<<endl;
 	}
 	cout<<"Ââiä äàíèõ çäiéñíþéòå òiëüêè àíãëiéñüêèì áóêâàìè."<<endl;
 	do
 	{
 		cout<<"1 - Ââiä"<<endl;
 		cout<<"2 - Ïîêàçàòè çàãàëüíó âàðòiñòü òîâàðó"<<endl;
 		cout<<"3 - Ïîêàçàòè íàéëåãíèé òîâàð"<<endl;
		cout<<"4 - Ïîêàçàòè áàçó"<<endl;
		cout<<"5 - Î÷èñòêà áàçè"<<endl;
 		cout<<"0 - Âèõiä"<<endl<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"Ðîáîòó çàâåðøåíî"<<endl;
		fclose(fileprod); return 0;
 		case '1': vvid(); break;
		case '2': tzina(); break;
		case '3': nailehshyi(); break;
      	case '4': vyvid_vsoho(); break;
      	case '5': ochystka(); break;
 	 	}
 	} while (1);	
}
