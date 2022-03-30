#include <iostream>
using namespace std;

int main()
{
	int x , y, z;
	cin >> x >> y >> z;
	cout << "Wert von x : " << x << endl;
	cout << "Wert von y : " << y << endl;
	cout << "Wert von z : " << z << endl;
	cout << "Status : " << cin.good() << endl;
}