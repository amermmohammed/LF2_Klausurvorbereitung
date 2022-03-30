#include <iostream>
using namespace std;

int main()
{  
	int Eingabezahl,Anzahl,Max,Min; Anzahl=0; Max=0; Min=0; 

	do
	{ 
		cout << Anzahl + 1 << ".Wert: "; 
		cin >> Eingabezahl; 
		
		if (Eingabezahl != 0)
		{
			if (Anzahl == 0) { Max = Min = Eingabezahl;}
			Anzahl++;
			if (Max < Eingabezahl) Max = Eingabezahl;
			if (Min > Eingabezahl) Min = Eingabezahl;
		}

	}
	while (Eingabezahl!= 0);

	cout << endl;
	cout << "Es waren " << Anzahl << " eingegebene Zahlen.";
	cout << endl;
	cout << "Maximum war: " << Max;
	cout << endl;
	cout << "Minimum war: " << Min;

	cout << endl << endl;
	return 0;
}
