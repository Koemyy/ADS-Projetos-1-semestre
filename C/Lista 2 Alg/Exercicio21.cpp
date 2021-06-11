#include <stdio.h>
main(){
	float ht,vh,sl,sal,inss,irpf;
	printf("Horas trabalhadas: ");
	scanf("%f",&ht);
	printf("Hora trabalhada: ");
	scanf("%f",&vh);
	sal=ht*vh;
	printf("\nSeu Salario Bruto:  %.2f\n",sal);
	if(sal<=868.29){
		inss=sal*0.0765;
	}else if(sal>=868.30&&sal<=1447.14){
		inss=sal*0.08;
	}else if(sal>=1447.15&&sal<=2894.28){
		inss=sal*0.09;
	}else{
		inss=sal*0.11;
	}
	if(sal<=1499.15){
		irpf=((sal-inss)*0)-0;
		sl=sal-(inss+irpf);
		printf("\nValor do INSS:  %.2f\n",inss);
		printf("\nValor do IRPF: %.2f\n",irpf);
		printf("\nSalario Liquido:  %.2f\n",sl);
	}else if(sal>=1499.16&&sal<=3743.15){
		irpf=((sal-inss)*0.15)-224.87;
		sl=sal-(inss+irpf);
		printf("\nValor do INSS:  %.2f\n",inss);
		printf("\nValor do IRPF:  %.2f\n",irpf);
		printf("\nSalario Liquido:  %.2f\n",sl);
	}else{
		irpf=((sal-inss)*0.275)-561.02;
		sl=sal-(inss+irpf);
		printf("\nValor do INSS:  %.2f\n",inss);
		printf("\nValor do IRPF: %.2f\n",irpf);
		printf("\nSalario Liquido:  %.2f\n",sl);
	}
}
