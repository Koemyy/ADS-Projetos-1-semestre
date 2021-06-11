#include<stdio.h>
main () {

int c=1,n;

printf("Digite um numero: ");
scanf("%i",&n);

while(c<=n){
	if(c%3==0&&c%5==0){
		printf("\nMultiplos de 3 e 5: %i",c);
	}
	c++;
}
}

