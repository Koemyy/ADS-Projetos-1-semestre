#include<stdio.h>
main () {

int a,b,c=0,x;

printf("Digite o primeiro numero: ");
scanf("%i",&a);
printf("Digite o segundo numero: ");
scanf("%i",&b);

while(c<=20){
	if(c==0){
		printf("%i\n",a);
		printf("%i",b);
	}
	else{
		printf("\n%i",a+b);
		x=b;
		b=a+b;
		a=x;
	}
	c++;
}
}

