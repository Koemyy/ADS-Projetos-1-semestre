/*A prefeitura abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Faça um programa que leia o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido.
*/
#include<stdio.h>
main () {

float sal, prest, r;
printf ("Digite seu salario: ");
scanf ("%f",&sal);
printf ("Digite o valor da prestacao: ");
scanf ("%f",&prest);

r=30/100*sal;

if(r>sal){
	printf ("\nVoce nao pode realizar o imprestimo, pois a prestacao ultrapassou os 30%% do seu salario\n");
}
else if(r<sal){
	printf ("\nVoce pode realizar o imprestimo\n");
}

}

