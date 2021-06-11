#include<stdio.h>
main () {

char ttemp, C, F;
float temp,x,y;

printf("Digite o tipo de temperatura C - Celsius ou F - Fahrenheit: ");
scanf("%c",&ttemp);
printf("Digite a temperatura: ");
scanf("%f",&temp);

if(ttemp=='C'){
	
x=(9/5)*temp+32;
printf("Convertendo Celsius para Fahrenheit: %2.f",x);
	
}
if(ttemp=='F'){
	
y=(temp-32)/1.8;
printf("Convertendo Fahrenheit para Celcius: %2.f",y);	
}

}

