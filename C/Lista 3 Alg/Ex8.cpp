#include<stdio.h>
main () {
	
int n,h,mn,mm=0,r=0;

while(h<500){
	h++;
	printf("Digite um numero: ");
	scanf("%i",&n);
	
	if(h==1){
	mn=n;	
	}
	
	if(n>mm){
		mm=n;
	}
	
	if(n<mn){
	 mn=n;
	}
	
	r+=n;
	
}
printf("\nMenor numero: %i",mn);
printf("\nMaior numero: %i",mm);
printf("\nMedia dos numeros digitados: %i",r/500);
}

