#include<stdio.h>
main () {

float c,l,a,k=0;
char s='s', com[30];

while(s!='n'&&s!='N'){
printf("\nDigite o nome do comodo: ");
scanf(" %s",&com);
printf("Digite a largura do comodo: ");
scanf("%f",&l);
printf("Digite o comprimento do comodo: ");
scanf("%f",&c);

a=c*l;
k+=a;

printf("\nA area do seu comodo e: %.2f",a);
printf("\n\nDeseja calcular mais um comodo?: ");
scanf(" %c",&s);
}
printf("\nA area da sua casa e: %.2f",k);
}

