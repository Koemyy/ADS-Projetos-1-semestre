#include<stdio.h>
main(){
int op;
float raio;
printf("Op��o (1 ou 2): ");
scanf("%i",&op);
printf("Raio: ");
scanf("%f",&raio);
switch(op){
case 1:
printf("�rea: %.2f\n",raio*raio*3.14159);
break;
case 2:
printf("Per�metro: %.2f\n",2*3.14159*raio);
break;
default:
printf("\nOperador inv�lido\n");
}
}
