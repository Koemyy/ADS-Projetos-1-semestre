#include<stdio.h>
main () {

float n,h;
int v;
while (h<5){
printf("Digite um valor: ");
scanf("%f",&v);
h++;
if (v%3==0){
n++;
}
}
printf("\nNumeros digitados divisiveis por 3: %.2f",n);
}


