#include<stdio.h>
main () {

float a,b,c;
printf("Digite o comprimento do lado do triangulo A: ");
scanf("%f",&a);
printf("Digite o comprimento do lado do triangulo B: ");
scanf("%f",&b);
printf("Digite o comprimento do lado do triangulo C: ");
scanf("%f",&c);

if(a+b>c&&a+c>b&&b+c>a){	
printf("\nOs 3 lados formam um triangulo\n");

if(a==b&&a==c)	
	printf("\nEquilatero\n");
	
else

if(a==b || a==c || b==c)
printf("\nIsosceles\n");

else 
	printf("\nEscaleno\n");
}
}

