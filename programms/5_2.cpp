#include <iostream>

using namespace std;

int main()
{
short Tag, Monat, Jahr, Limit;
bool flag = false;

	
	do 
	{
		cout << "Bitte das Jahr eingeben: ";
		cin >> Jahr; 
	}
	while (Jahr < 0 || Jahr > 2500);


	
	do
	{
		cout << "Bitte den Monat eingeben: ";
		cin >> Monat; 
	}
	while ((Monat < 1)||(Monat >12));

	
	do 
	{
		cout << "Bitte den Tag eingeben: ";
		cin >> Tag;

        Limit = 30;
        if   (  (Monat%2==1) && (Monat<8) ) Limit = 31;
        if   (  (Monat%2==0) && (Monat>7) ) Limit = 31;
        
        if ( Monat == 2)
        {
            Limit = 28;
            
 	        if ( (Jahr%4==0)&&(Jahr%100!=0) ) Limit = 29;
             
            if ( Jahr%400==0 )Limit = 29;
        }
            
        if ( Tag >= 1 && Tag <=Limit) flag = true;
	} 
	while (flag==false);

	cout << "Dieses Datum ist korrekt" << endl;
	
return 0;
}
