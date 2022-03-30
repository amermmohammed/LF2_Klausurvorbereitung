#include <iostream>
using namespace std;

int main()
{  
	int zahl;
	int i;
	int richtung = 1;

	cout << "Bitte eine Zahl eingeben: ";
	cin >> zahl;

	for ( i=1 ; i<=zahl; i = i + 1) cout << i << "   ";
	cout << endl;

	cout << "Bitte eine weitere Zahl eingeben: ";
	cin >> zahl;

	for ( i=zahl ; i>=2; i = i - 2) cout << i << "   ";
	cout << endl;

	cout << "von 1 bis 10 und wieder rueckwarts: " << endl;

	for ( i = 1 ; i > 0; i = i + richtung) 
	{
		cout << i << "   ";
		if (i == 10) richtung = -1;
	}

	cout << endl;

	return 0;
}
