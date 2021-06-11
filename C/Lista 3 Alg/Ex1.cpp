#include<stdio.h>
main () {

float v,n,h;

while (h<5){
printf("Digite um valor: ");
scanf("%f",&v);
h++;
if (v<0){
n++;
}
}
printf("\nNumeros digitados negativos: %.2f",n);
}
