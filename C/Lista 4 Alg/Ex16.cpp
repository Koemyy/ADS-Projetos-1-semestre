#include<stdio.h>
main () {

float c=1,n,h=0,k=0,b=0;

while(c<=5){
	printf("Digite um numero: ");
	scanf("%f",&n);
	if(n<0){
		h++;
	}
	if(n>0){
		k++;
	}
	b+=n;
	c++;
}
printf("\nA media aritmetica e: %.2f",b/c);
printf("\nQuantidade de valores positivos: %.2f",k);
printf("\nQuantidade de valores negativos: %.2f",h);
printf("\nPercentual dos numeros negativos e positivos: %.2f e %.2f",(k/c)*100,(h/c)*100);
}

