#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << setfill('#') << "Hallo" << endl;
    cout << setw(10) << setfill('#') << left << "Hallo" << endl;
    cout << setprecision(3) << 1.12345 << endl;
    cout << "Dezimal    : " << 30 << endl;
    cout << "Oktal      : " << oct << 30 << endl;
    return 0;
}