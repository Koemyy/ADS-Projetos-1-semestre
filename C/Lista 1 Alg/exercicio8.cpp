/*Calcule a �rea de um c�rculo. A �rea de um c�rculo � calculada multiplicando o raio2 por PI (3.14159).*/
#include<stdio.h>
#include<math.h>
main () {
	
	float r, rr;

printf ("Insira o valor do Raio que quer calcular: ");
scanf ("%f", &r);

rr= pow (r, 2) * 3.14159;

printf ("\nO valor do raio e: %.2f\n" ,rr);

}

