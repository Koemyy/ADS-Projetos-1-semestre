/*10. Uma revendedora de carros usados paga a seus funcion�rios
vendedores, um sal�rio fixo por m�s e mais 5% do valor das vendas
por ele efetuadas. Construa um algoritmo que leia o n�mero do
vendedor, o total de vendas no m�s e o sal�rio fixo. Calcule o
sal�rio a ser pago a este vendedor, escrevendo o n�mero do
vendedor e seu sal�rio total.*/
#include<stdio.h>
main(){
int id;
float tv, sf, st;
printf("ID Vendedor: ");
scanf("%i",&id);
printf("Total de vendas: ");
scanf("%f",&tv);
printf("Sal�rio Fixo: ");
scanf("%f",&sf);
st=sf+tv*5/100;
printf("\nO vendedor ID. %i ir� receber R$ %.2f\n",id,st);
}
