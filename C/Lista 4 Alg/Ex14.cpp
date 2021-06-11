#include<stdio.h>
main () {

int c=0,n,h=0;

while(c<=5){
	printf("Digite um numero: ");
	scanf("%i",&n);	
	if(n>30){
		h++;
	}
	c++;
}
printf("\nQuantidade de numeros maiores do que 30: %i",h);
}

