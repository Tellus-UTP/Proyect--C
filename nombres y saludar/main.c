#include <stdio.h>
#include <stdlib.h>

int main()
{

//Bloque de declarativo
char nomb [20 ];

//Bloque de Instrucci�n
printf ("Ingrese su nombre:\n");
scanf (" %[^\n]", &nomb);
printf ("Bienvenido a clase %s\n ",nomb);

}
