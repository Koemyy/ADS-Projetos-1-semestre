#include<stdio.h>
main () {

int c=1,n;

while(c<=10){
	printf("\nDigite um numero: ");
	scanf("%i",&n);
	printf("\nO quadrado no %i digitado e: %i",n,n*n);
	c++;
}

}

