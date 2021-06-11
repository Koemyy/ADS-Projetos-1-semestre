/*Sabe-se que o quilowatt de energia custa 0,5% do salário mínimo. Faça um algoritmo que receba o valor do salário mínimo
e a quantidade de quilowatts consumida por uma residência. Calcule e mostre:
a. O valor, em Reais, de cada quilowatt.
b. O valor, em Reais, a ser pago por essa residência.
c. O valor, em Reais, a ser pago com desconto de 15%.*/
#include<stdio.h>
main () {
	
	float s, qw, a, b, c;
	
	
	printf ("Digite aqui o seu salario minimo: ");
	scanf("%f",&s);
	printf ("Digite aqui a quantidade de quilowatts consumidos em sua redidencia: ");
	scanf("%f",&qw);
	
	a= s* 0.5/100;
	b= a*qw;
	c= b*0.85;
	
    printf ("\nCada quilowatt equivale a: %.2f\n",a);
    printf ("\nO valor, em Reais, a ser pago por essa residencia: R$%.2f\n",b);
    printf ("\nO valor, em Reais, a ser pago com desconto de 15 porcento: R$%.2f\n",c);

}

