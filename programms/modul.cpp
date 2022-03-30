int a = 25;
int b = 12;
int c;
c = a % b ; //Variable c hat den Wert 1
c = b % a ;  //Variable c hat den Wert 12

/*
Diese Operation scheint zuerst etwas merkwürdig, da b kleiner als a ist. Aber die Logik des Modulo-Operators ist eindeutig. 12 ist nullmal durch 25 tei lbar und es bleibt ein Rest von 12.
*/