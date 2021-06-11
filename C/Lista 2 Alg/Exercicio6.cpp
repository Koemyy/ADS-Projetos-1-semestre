#include<stdio.h>
main () {
	
float x,pp;

printf("Digite em quilos, o valor dos peixes: ");
scanf("%f",&pp);

if(pp<=50){
printf("\nPeso dentro do regulamentado");
}
else if(pp>50){
	
x=pp*4;

printf("\nO valor que voce devera pagar e de: %f",x);
}
}

