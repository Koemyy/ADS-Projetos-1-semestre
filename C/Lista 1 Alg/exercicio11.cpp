/*Fa�a um algoritmo que ap�s a entrada de uma determinada dist�ncia entre dois pontos(Km), e uma determinada
velocidade(Km/h), diga qual o tempo m�dio que levar� para chegada � esse local.
*/
#include<stdio.h>
main () {
	
	float a, v, vm, t;
	int m;
	
printf ("Distancia entre o ponto A e B: ");
scanf ("%f", &a);
printf ("Digite a velocidade: ");
scanf ("%f", &v);

vm= a/v;
t=vm;
m=t*60;

printf ("O tempo para chegar ao seu destino e de: %.2f\n", t);	
printf("Tempo h/m: %ih %im\n",m/60, m%60); //Aula 17/03
}

