/*10. Uma revendedora de carros usados paga a seus funcionários
vendedores, um salário fixo por mês e mais 5% do valor das vendas
por ele efetuadas. Construa um algoritmo que leia o número do
vendedor, o total de vendas no mês e o salário fixo. Calcule o
salário a ser pago a este vendedor, escrevendo o número do
vendedor e seu salário total.*/
#include<stdio.h>
main(){
int id;
float tv, sf, st;
printf("ID Vendedor: ");
scanf("%i",&id);
printf("Total de vendas: ");
scanf("%f",&tv);
printf("Salário Fixo: ");
scanf("%f",&sf);
st=sf+tv*5/100;
printf("\nO vendedor ID. %i irá receber R$ %.2f\n",id,st);
}
