#include<stdio.h>
main(){
char area;
float satual, pa, va, sfinal;
printf("Área (P ou A): ");
scanf(" %c",&area);
printf("Salário atual: ");
scanf("%f",&satual);
if(area=='P' || area=='p'){
if(satual<=700)
pa=0.15; // 15/100 = 0.15
else if(satual<=1800)
pa=0.10;
else if(satual<=2500)
pa=0.07;
else
pa=0;
} else {
if(satual<=700)
pa=0.18; // 18/100 = 0.15
else if(satual<=1800)
pa=0.12;
else if(satual<=2500)
pa=0.08;
else
pa=0.05;
}
printf("\nPercentual: %.2f%%\n", pa*100);
va=satual*pa;
printf("Valor aumento R$ %.2f\n",va);
sfinal=satual+va;
printf("Salário Final R$ %.2f\n",sfinal);
}
