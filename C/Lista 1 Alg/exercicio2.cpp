/*A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça um algoritmo que receba
um valor de uma compra e mostre o valor das prestações.
*/
#include<stdio.h>
main () {
	
	float vc, prest;
	printf("Digite o valor da compra: ");
	scanf ("%f" ,&vc);
	prest=vc/5;
	printf ("\nValor das prestacoes: R$ %.2f\n" ,prest);
	

}

