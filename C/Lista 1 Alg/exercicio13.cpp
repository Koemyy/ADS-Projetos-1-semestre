/*Elabore um algoritmo que leia uma quantidade de segundos e transforme este tempo em dias, horas e minutos. Exemplo:
197820s. Resultado: 2 dias, 6 horas e 57 minutos.
*/
#include<stdio.h>
main () {
	
int s, d, h, m;

printf ("Digite a quantidade de segundos que queira converter para dias, horas e minutos: ");
scanf ("%i", &s);

d= s/86400;
h= (s%86400)/3600;
m= ((s%86400)%3600)/60;

printf ("\nConvertando o resultado em dias: %i\n",d);
printf ("\nConvertando o resultado em horas: %i\n", h);
printf ("\nConvertando o resultado em minutos: %.2i\n", m);



}

