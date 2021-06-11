#include<stdio.h>
main () {
	
	float pt, np, ppn;
	printf("Digite um peso na terra: ");
	scanf("%f",&pt);
	printf("\nDigite o codigo do planeta, de 1 a 5: ");
	scanf("%f",&np);
	
	if(np==1){
		
		ppn=pt*0.37;
		printf("\nO valor do peso no planeta Mercurio e: %f",ppn);
	}
	else if(np==2){
		ppn=pt*0.88;
		printf("\nO valor do peso no planeta Venus e: %f",ppn);
	}
     else if(np==3){
     	ppn=pt*0.38;
     	printf("\nO valor do peso no planeta Marte e: %f",ppn);
	 }
	 else if(np==4){
	 	ppn=pt*2.64;
	 	printf("\nO valor do peso no planeta Jupiter e: %f",ppn);
	 }
	 else if(np==5){
	 	ppn=pt*1.15;
	 	printf("\nO valor do peso no planeta Saturno e: %f",ppn);
	 }
}

