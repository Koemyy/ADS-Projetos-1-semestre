/*Construa um algoritmo que solicite o saldo de uma aplicação e mostre o saldo reajustado, com acréscimo de 7,5%.*/
#include<stdio.h>
main () {

float s, sr;
printf("Saldo: ");
scanf ("%f" ,&s);
sr= s*1.075; //s*7.5/100+s;
printf ("\n Saldo reajustado: R$ %.2f\n" ,sr);


}

