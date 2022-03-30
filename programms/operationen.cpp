#include <iostream>
using namespace std;

/*
Drei Variablen werden angelegt. Man spricht von einer Deklaration (Bekanntgabe) der Variablen. 
Die Variablen sind global und erhalten damit automatisch den Wert O beim Programmstart.
*/
long int    zahl_1;
long int    zahl_2;
long int    ergebnis;


int main( )
{
/*
Den Variablen wird ein Wert mithilfe des Zuweisungsoperators = zugewiesen.
*/
    zahl_1 = 10 ;
    zahl_2 = 20;

/*
Die Variable ergebnis erhält den Wert aus der Berechnung, also den Wert 30.
*/
    ergebnis = zahl_1 + zahl_2;
    
    return 0;
}