/*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um
algoritmo que receba o valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.
*/
#include<stdio.h>
main () {
	
	float proda, descont;
	printf ("Insira o valor do produto: ");
	scanf ("%f", &proda);
	descont = proda-proda*9/100; // descont=proda*0.91;
  	 // 100% -> 100/100 -> 1
    // 9% -> 9/100 -> 0.09 -
   // 0.91
	printf ("\n O novo valor do produto com 9 porcento de desconto  e: %.2f\n", descont);

}

