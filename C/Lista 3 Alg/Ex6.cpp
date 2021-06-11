#include<stdio.h>
main () {
int n=1000;
printf("Numeros divisiveis por 11 que o resto e 5: ");
while(n<2000){
	n++;
	if(n%11==5){
	printf("\n%i",n);
	}
}
}

