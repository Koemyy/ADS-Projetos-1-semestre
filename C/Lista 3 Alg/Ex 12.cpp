/*12. Escreva um programa que leia um número n, que
indica quantos valores devem ser lidos a seguir. Para
cada número lido, mostre o fatorial deste valor*/
#include<stdio.h>
main(){
int qc, c, n, fat;
printf("Quantidade de cálculos: ");
scanf("%i",&qc);
while(qc>=1){
printf("\nNúmero: ");
scanf("%i",&n);
c=1;
fat=1;
while(c<=n){
fat*=c;
c++;
}
printf("Fatorial %i = %i\n",n,fat);
qc--;
}
}
