/*Fa�a um algoritmo que calcule o valor em reais, correspondente aos d�lares que um turista possui no cofre do hotel. O
programa deve solicitar os seguintes dados: Quantidade de d�lares guardados no cofre e cota��o do d�lar naquele dia.*/
#include<stdio.h>
main () {

float dolarh, dolarc, ddch;
printf ("Insira a quantia do cofre : ");
scanf ("%f" ,&dolarh);
printf ("Cotacao do dolar hoje: ");
scanf ("%f", &dolarc);
ddch= dolarh*dolarc;
printf("\n Sua quantidade de dolar em real e: R$ %2.f\n" ,ddch);



}

