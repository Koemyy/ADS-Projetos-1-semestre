#include<stdio.h>
main () {
	
int va,vb,r;

printf("Valor A: ");
scanf("%i",&va);
printf("Valor B: ");
scanf("%i",&vb);

if (va==vb){
printf ("\nValores iguais\n");
r=va+vb;
printf ("\nO valor da soma e %.2i\n",r);
}else{
printf ("\nValores diferentes\n");
r=va*vb;
printf ("\nO valor da multiplicacao e %.2i",r);
}
}

