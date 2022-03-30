#include <iostream>

using namespace std;

int main()
{
    float zahl1, zahl2, zahl3;

    float min,max;


	cout << "Bitte die erste Zahl eingeben: ";
	cin >> zahl1;

	cout << "Bitte die zweite Zahl eingeben: ";
	cin >> zahl2;

	cout << "Bitte die dritte Zahl eingeben: ";
	cin >> zahl3;

	min = zahl1;  //Das ist der Trick: einfach so tun, als wنre zahl1 das Min.
    max = zahl2;  //und zahl2 das Max. --> spart eine if-Anweisung   

	if (zahl1 > zahl2) { min = zahl2; max = zahl1;}
	
	if (max < zahl3) max = zahl3;

    if (zahl3 < min) min = zahl3;


	cout << "Minimum: " << min << endl;
	cout << "Maximum: " << max << endl;


    return 0;
}
