#include<stdio.h>
main () {

float p,r;
printf("Digite o peso da peca de metal: ");
scanf("%f",&p);

if(p>50){
	
	printf("\nSera aproveitado 85%% da peca");	
}
else if(p<=50&&p>20){
	
    printf("\nSera aproveitado 60%% da peca");
	
}
else if(p<=20&&p>10){
	
	printf("\nSera aproveitado 30%% da peca");
}
else if(p<=10){

    printf("\nA peca nao sera aproveitada");
}
}

