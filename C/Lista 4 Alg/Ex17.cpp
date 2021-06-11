#include<stdio.h>
main () {

int c=1,h=0,n;
float media=0;

while(c<=50){
	printf("\nAluno: %i",c);
	h=0;
	media=0;
while(h<3){
	printf("\nDigite sua nota: ");
	scanf("%i",&n);
	media+=n;
	h++;
}
printf("\n\nSua media e %.2f\n",media/3);
c++;
}
}

