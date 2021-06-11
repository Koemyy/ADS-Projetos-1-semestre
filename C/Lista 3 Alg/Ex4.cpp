#include<stdio.h>
main () {
int n=1,h,x;

while(n!=0){
printf("Digite um numero: ");
scanf("%i",&n);
if(n<0){
h+=n;
}
}
printf("Numeros negativos digitados: %i",h);
}
