/*A prefeitura abriu uma linha de cr�dito para os funcion�rios estatut�rios. O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio
bruto. Fa�a um programa que leia o sal�rio bruto e o valor da presta��o e informar se o empr�stimo pode ou n�o ser concedido.
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

