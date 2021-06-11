#include<stdio.h>
main () {

int c=1,id,cardapio,h=0,j=0,m=0,f=0,mo=0;

while(c<=40){
	printf("1 Masculino e 2 Feminino: ");
	scanf("%i",&id);
	printf("1 Otimo, 2 Bom, 3 Regular, 4 Ruim: ");
	scanf("%i",&cardapio);
	if(cardapio==1||cardapio==2){
		h++;
	}
	if(cardapio==3||cardapio==4){
		j++;
	}
	if(id==1){
		m++;
		if(cardapio==1){
			mo++;
		}
	}
	if(id==2){
		f++;
	}
	c++;
}
printf("\nPercentual de clientes que responderam otimo e bom: %.2f",h/(c-1.0)*100);
printf("\nPercentual de clientes que responderam regular e ruim: %.2f",j/(c-1.0)*100);
printf("\nPercentual de clientes do sexo masculino e feminono: %.2f %.2f",m/(c-1.0)*100,f/(c-1.0)*100);
printf("\nQuantidade de pessoas do sexo masculino que responderam otimo: %i",mo);
}

