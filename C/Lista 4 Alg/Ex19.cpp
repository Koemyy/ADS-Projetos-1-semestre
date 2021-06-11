#include<stdio.h>
main () {

int c=1,id,masculino=0,feminino=0,salf=0;
char sexo;
float mediasal,mediaid,sal;

while(c<=40){
	printf("\nIdade?: ");
	scanf("%i",&id);
	printf("\nSexo?: ");
	scanf(" %c",&sexo);
	printf("\nSalario?: ");
	scanf("%f",&sal);
	mediasal+=sal;
	mediaid+=id;
	if(sexo=='m'){
		masculino++;
	}
	if(sexo=='f'){
		feminino++;
		if(sal<500){
			salf++;
		}
	}
	c++;
}
printf("\nMedia salarial dos habitantes: %.2f",mediasal/(c-1));
printf("\nMedia de idade do grupo: %.2f",mediaid/(c-1));
printf("\nPercentual de habitantes do sexo masculino: %.2f",(masculino/(c-1.0))*100);
printf("\nPercentual de habitantes do sexo feminino: %.2f",(feminino/(c-1.0))*100);
printf("\nQuantidade de mulheres com salario inferior a R$ 500,00: %i",salf);
}

