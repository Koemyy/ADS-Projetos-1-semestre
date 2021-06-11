#include<stdio.h>
main () {

int n,h=1,k;

printf("Digite um numero: ");
scanf("%i",&n);

while(n!=0){
h=h*n;
n=n-1;
}
printf("O fatorial do numero digitado e: %i",h);

}

