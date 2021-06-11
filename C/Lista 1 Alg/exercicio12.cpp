/*Construa um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em
graus Celsius: 5 / 9 * (F – 32).
*/
#include<stdio.h>
main () {

float f, c, fc;

printf ("Digite a temperatura em Fahrenheit: ");
scanf ("%f", &f);

fc= f-32;
c= fc * 5.0/9;

printf ("Sua temperatura de Fahrenheit para Celsius e: %.2f\n", c);

}

