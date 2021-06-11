#include<stdio.h>
main () {

int c=1,n;
float h=0;

printf("Digite um numero: ");
scanf("%i",&n);

while(c<=n){
	h+=1.0/c;
	c++;
}
printf("\nValor de H: %f",h);
}

