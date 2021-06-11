#include<stdio.h>
main () {

int n,h,x;

printf("Digite o fator multiplicador: ");
scanf("%i",&n);

while(h<10){
h++;
x=n*h;
printf("\n%i x %i = %i",n,h,x);
}
}

