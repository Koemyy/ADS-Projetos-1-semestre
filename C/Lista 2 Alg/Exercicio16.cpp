#include<stdio.h>
main(){
int op;
float raio;
printf("Opção (1 ou 2): ");
scanf("%i",&op);
printf("Raio: ");
scanf("%f",&raio);
switch(op){
case 1:
printf("Área: %.2f\n",raio*raio*3.14159);
break;
case 2:
printf("Perímetro: %.2f\n",2*3.14159*raio);
break;
default:
printf("\nOperador inválido\n");
}
}
