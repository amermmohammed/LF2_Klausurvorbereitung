#include <iostream>

using namespace std;

int main()
{
int i , j , k;

k = 0;
for ( i = 1; i < 10 ; i = i + 1 ) k = k + i;
cout << k << endl;

k = 0;
for ( i = 10 ; i > 8 ; i = i - 1 ) k = i;
cout << k << endl;

k = 0;
for ( i = 2; i < 10 ; i = i + 2 ) k = k + i;
cout << k << endl;

k = 0;
for ( i = 5 ; i ; i-- ) k = i;
cout << k << endl;

k = 0;
for ( i = 1, j = 5 ; (i < 5) && (j>1) ; i++, j--) k = k + i*j;
cout << k << endl;

k = 0;
for ( i = 1; i < 5; i++)
{
    if (i==3) continue;
    k = k + i;
}
cout << k << endl;

k = 0;
for ( i = 1; i < 10; i++)
{
    k = k + i;
    if (i==6) break;
}
cout << k << endl;


return 0;
}
