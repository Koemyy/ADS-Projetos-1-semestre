#include<stdio.h>
main () {

int c=1,mm,mn,n;

while(c<=5){
printf("Digite um numero: ");
scanf("%i",&n);

	if(c==1){
		mm=n;
		mn=n;
	}
    if(n>mm){
       mm=n;
    }
    if(n<mn){
       mn=n;
    }
    c++;
}
printf("\nMaior: %i\n",mm);
printf("Menor: %i\n",mn);
}

