#include<stdio.h>
main () {
 float l,r;
 char tc,A,G;
 
 printf("Digite a fruta que deseja comprar Abacaxi - A ou Goiaba - G: ");
 scanf("%c",&tc);
 printf("Digite a quantidade em quilos: ");
 scanf("%f",&l);

 
 if(tc=='A'){
 	
 if(l<2){
 	r=l*1.90;
 	printf("Voce vai pagar: %2.f",r);
 } else if(l>2&&l<5){
 	r=l*1.80;
 	printf("Voce vai pagar: %2.f",r);
 }else if(l>5&&l<8){
 	r=l*1.60;
 	printf("Voce vai pagar: %2.f",r);}
  else if(l>8){
 	r=l*1.60;
 	r=r/0.9;}
 }
 else (tc=='G');{
 	
 	if(l<2){
 	r=l*2.50;
 	printf("Voce vai pagar: %2.f",r);
 } else if(l>2&&l<5){
 	r=l*2.40;
 	printf("Voce vai pagar: %2.f",r);
 }else if(l>5&&l<8){
 	r=l*2.20;
 	printf("Voce vai pagar: %2.f",r);
 }else if(l>8){
 	r=l*2.20;
 	r=r/0.9;
 }
 	
 }
}

