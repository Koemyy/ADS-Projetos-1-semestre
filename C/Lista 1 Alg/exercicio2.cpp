/*A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros. Fa�a um algoritmo que receba
um valor de uma compra e mostre o valor das presta��es.
*/
#include<stdio.h>
main () {
	
	float vc, prest;
	printf("Digite o valor da compra: ");
	scanf ("%f" ,&vc);
	prest=vc/5;
	printf ("\nValor das prestacoes: R$ %.2f\n" ,prest);
	

}

