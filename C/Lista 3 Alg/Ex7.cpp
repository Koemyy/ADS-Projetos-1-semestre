#include<stdio.h>
main () {
int n,h=0,g=0,k=0,l=0,v=-1;

while(n!=0){
	printf("\nDigite seu numero de voto: ");
	scanf("%i",&n);
	switch(n){
	case 1:
	h++;
	break;
	case 2:
	g++;
	break;
	case 3:
	k++;
	break;
	case 4:
	l++;
	break;
}
v++;
}
printf("\nTotal de votos: %i",v);
printf("\nCandidato 1: %.2f %%",(float)h/v*100);
printf("\nCandidato 2: %.2f %%",(float)g/v*100);
printf("\nNulo: %.2f %%",(float)k/v*100);
printf("\nBranco: %.2f %%",(float)l/v*100);
}

