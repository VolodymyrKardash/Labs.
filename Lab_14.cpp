#include <iostream>
#include <__mobiletel.h>
#include <stdlib.h>
using namespace std;



int main() 
{ 
	setlocale(LC_ALL,"");
	char x;
	file();
	
 	do
 	{
 		cout<<"1 - Ââiä"<<endl;
 		cout<<"2 - Ïîêàçàòè âñå"<<endl;
		cout<<"3 - Ïîøóê çà ðîêîì âèïóñêó"<<endl;
		cout<<"4 - Ïîøóê çà ðîêîì âèïóñêó òà êðà¿íîþ-âèðîáíèêîì"<<endl;
		cout<<"5 - Î÷èñòèòè áàçó"<<endl;
		cout<<"6 - Ðåäàãóâàòè áàçó"<<endl;
 		cout<<"7 - Ïiäêëþ÷åííÿ iíøîãî ôàéëó"<<endl;
		cout<<"8 - Âèõiä"<<endl<<endl;
 		x=getch();
 		switch(x)
 		{
		case '8': fclose(f_abon); return 0;
 		case '1': input();break;
		case '2': show(); break;
      	case '3': search(); break;
      	case '4': search_m();break;
      	case '5': clear(); break;
		case '6': red();break;
      	case '7': file(); break;
 	 	}
 	} while (1);	
}
