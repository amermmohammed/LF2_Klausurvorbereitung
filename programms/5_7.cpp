#include <iostream>

using namespace std;

int main()
{
int a,b,c,d,e,f,g,h,i,j;
int treffer = 0;
bool test = false;

for (a = 0; a < 10; a++)
    for (b = 0; b < 10; b++)
        if (b!=a)
        for (c = 0; c < 10; c++)
            if (c!=b && c!=a)
            for (d = 0; d < 10; d++)
                if (d!=c && d!=b && d!=a)
                for (e = 0; e < 10; e++)
                    if (e!=d && e!=c && e!=b && e!=a)
                    for (f = 0; f < 10; f++)
                        if (f!=e && f!=d && f!=c && f!=b && f!=a)
                        for (g = 0; g < 10; g++)
                            if (g!=f && g!=e && g!=d && g!=c && g!=b && g!=a)
                            for (h = 0; h < 10; h++)
                                if (h!=g && h!=f && h!=e && h!=d && h!=c && h!=b && h!=a)
                                for (i = 0; i < 10; i++)
                                    if (i!=h && i!=g && i!=f && i!=e && i!=d && i!=c && i!=b && i!=a)
                                    for (j = 0; j < 10; j++)
                                    {
                                        if (j!=i && j!=h && j!=g && j!=f && j!=e && j!=d && j!=c && j!=b && j!=a)
                                        {   
                                           //cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i << " " << j << endl;
                                        
                                           if (( 10*e + f )!=0)
                                           if ((1000*a + 100*b + 10*c + d)  /  ( 10*e + f ) ==  ( 100*e + 10*g + d ) ) treffer++;
                                           if ((1000*h + 100*i + 10*j + e)  -  ( 1000*h + 100*i + 10*b + g ) ==  ( 10*f + e ) ) treffer++;
                                           if ((1000*j + 100*i + 10*d + b)  -  ( 1000*h + 100*i + 10*d + f ) ==  ( 1000*c + 100*g + 10*g + c ) ) treffer++;
                                           if ((1000*a + 100*b + 10*c + d)  -  (1000*h + 100*i + 10*j + e)  ==  (1000*j + 100*i + 10*d + b) ) treffer++;
                                           if (( 10*e + f ) + ( 1000*h + 100*i + 10*b + g ) ==  ( 1000*h + 100*i + 10*d + f ) ) treffer++;
                                           if (( 100*e + 10*g + d ) *  ( 10*f + e )  ==  ( 1000*c + 100*g + 10*g + c ) ) treffer++;
                                       
                                           if (treffer==6)
                                           { 
                                              cout << "Die Zahlen lauten:" << endl;
                                              cout << "a = " << a;
                                              cout << "b = " << b;
                                              cout << "c = " << c;
                                              cout << "d = " << d;
                                              cout << "e = " << e;
                                              cout << "f = " << f;
                                              cout << "g = " << g;
                                              cout << "h = " << h;
                                              cout << "i = " << i;
                                              cout << "j = " << j;
											  cout << endl;
                                              return 0;         
                                           }
                                           treffer = 0;                                          
                                          
                                        }
                                        
                                        
                                    }
	
	cout << "Keine Loesung gefunden!" << endl;
	return 0;

}
