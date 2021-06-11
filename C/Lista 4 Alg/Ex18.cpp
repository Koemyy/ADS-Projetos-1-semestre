#include<stdio.h>
main () {

int c=0,a,b;

while(c<=5){
	printf("Digite A: ");
	scanf("%i",&a);
	printf("Digite B: ");
	scanf("%i",&b);
	while(a<=b){
		printf("%i ",a);
		a++;	
	}
	printf("\n\n");
}

}

