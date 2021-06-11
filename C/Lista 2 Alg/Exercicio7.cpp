#include<stdio.h>
main () {

char periodo;
printf ("Ola, em que periodo voce estuda? M - Matutino ou V - Vespertino ou N - Noturno: ");
scanf (" %c",&periodo);

switch(periodo){
	case'M':
	case'm':
	printf("\nBom dia!\n");
	break;
	case'V':
	case'v':
	printf("\nBoa tarde!\n");
	break;
	case'N':
	case'n':
	printf("\nBoa noite!\n");
	break;
	default:
    printf("\nResposta Invalida\n");
    
   
}

}

