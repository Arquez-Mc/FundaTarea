#include <iostream>
using namespace std;

int main ()
{
char letras;
cout<< "ingrese alguna letra: R, Y, B, W, K, C, G";
cin>> letras;

switch(letras)
{
case 'R':
cout<< "  Rojo\n";
break;
case 'Y':
cout<< "  amarillo\n";
break;
case 'B':
cout<< "  azul\n";
break;
case 'W':
cout<< "  blanco\n";
break;
case 'K':
cout<< "  negro\n";
break;
case 'C':
cout<< "  cian\n";
break;
case 'G':
cout<< "  verde\n";
break;

default:
cout<< "la letra que ingresaste es invalida";
break;


}
    
   return 0;
}