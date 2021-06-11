#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int r,rep=0,num=0,auxR=0,auxN=0;

    srand(time(NULL));
    printf("Sequencia: ");

    for(int i=0;i<30;i++){

        r = rand() % 5 +1;
        printf("%i ",r);

        if(r!=auxN){
            auxR=1;
        }else{
            auxR++;
        }

        if(auxR>rep){
            rep=auxR;
            num=auxN;
        }
    auxN=r;
    }

    printf("\nNumero que mais se repetiu en sequencia: %i", num);
    printf("\nQuantidade de vezes: %i\n", rep);
}

