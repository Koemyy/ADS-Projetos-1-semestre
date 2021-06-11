/*14. Construa um algoritmo que leia altura e comprimento
de uma parede e calcule a quantidade de tijolos a ser
utilizado na construção dessa parede. Sabe-se que o tijolo
tem 30cm de comprimento e 20cm de altura e a argamassa
ocupa 2,5 cm.*/
#include<stdio.h>
main(){
float ap, cp, qt;
printf("Altura parede (mts): ");
scanf("%f",&ap);
printf("Comprimento parede (mts): ");
scanf("%f",&cp);
qt=(ap*cp)/(0.325*0.225);
printf("\nQuantidade de tijolos: %.f\n",qt);
}
