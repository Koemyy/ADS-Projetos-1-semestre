#include<stdio.h>
main () {

int n=1,h,x;

while(n!=0){
printf("Digite um numero: ");
scanf("%i",&n);
if(n%2==0&&n!=0){
h++;
x+=n;
}
}
printf("\nSua media e: %i",x/h);
}

