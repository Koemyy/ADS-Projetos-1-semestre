#include<stdio.h>
main () {

char cp;
float pe,r;

printf("Digite o codigo do produto: ");
scanf(" %c",&cp);
printf("Digite o valor do produto: ");
scanf("%f",&pe);

if(cp==1){
	r=pe*0.9;
}
if(cp==2){
    r=pe*0.95;	
}
if(cp==3){
    r=pe/2;
}
if(cp==4){
	r=pe/3;
	r=r*0.10;
}
}
