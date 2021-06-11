/*Construa um algoritmo que o usuário entre com um lado de um quadrado e informe:
a. Perímetro: lado * 4
b. Área: lado2
c. Diagonal: lado * (2
1/2)*/
#include<stdio.h>
#include<math.h>
main () {

int lado;
float p, a, d;

printf ("Insira o lado do quadrado que queira calcular: ");
scanf ("%d", &lado);

p= lado* 4;
a= pow(lado, 2);
d= (lado)*pow(2, (1.0/2.0));

printf ("\nO valor do perimetro e: %.2f\n", p);
printf ("\nO valor da area e: %.2f\n", a);
printf ("\nO valor da diagonal e: %.2f\n", d);

}

