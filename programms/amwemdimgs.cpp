#include <iostream>
using namespace std;
double Wert_1 ;
double Wert_2 ;
double Summe;
double Produkt;

int main( )
{
Wert_1 = 10.5;
Wert_2 = 8.5;
Summe = Wert_1 + Wert_2;
Produkt = Wert_1 * Wert_2 ;

/*
Das Ausgabeobjekt cout erkennt automatisch, dass der Wert einer Variablen ausgegeben werden soll. Die Anweisung cout << Wert_1; bringt also den Inhalt der Variable Wert_1 auf den Bildschirm.
*/

cout << "Die Summe von " << Wert_1;
cout << " und von " << Wert_2 ;
cout << " lautet : " << Summe;
cout << endl;
cout << "Das Produkt von " << Wert_1;
cout << " und von " << Wert_2 ;
cout << " lautet : " << Produkt;
cout << endl << endl;
return 0 ;
}

