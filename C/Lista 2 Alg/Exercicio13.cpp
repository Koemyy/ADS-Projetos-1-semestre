#include<stdio.h>
main () {
 float l,r;
 char tc, A, G;
 printf("Digite quantos litros foram vendidos: ");
 scanf("%f",&l);
 printf("Digite o tipo de combustivel A - álcool, G - gasolina: ");
 scanf(" %c",&tc);
 
 if(tc=='A'){
 	
 if(l<15){
 	r=l*2;
 	printf("Voce vai pagar: %2.f",r);
 } else if(l>15&&l<30){
 	r=l*1.95;
 	printf("Voce vai pagar: %2.f",r);
 }else if(l>30){
 	r=l*1.80;
 	printf("Voce vai pagar: %2.f",r);
 }
 	
 }
 if (tc=='G'){
 	if(l<15){
 	r=l*2.90;
 	printf("Voce vai pagar: %2.f",r);
 } else if(l>15&&l<30){
 	r=l*2.85;
 	printf("Voce vai pagar: %2.f",r);
 }else if(l>30){
 	r=l*2.75;
 	printf("Voce vai pagar: %2.f",r);
 }
 	
 }
}

