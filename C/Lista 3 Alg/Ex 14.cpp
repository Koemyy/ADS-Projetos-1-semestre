/*14. Construa um programa que gere a sequencia de n�meros
perfeitos entre 1 e 800. Um n�mero perfeito � aquele que �
igual a soma dos seus divisores. (Ex.: 6 = 1+2+3;
28= 1+2+4+7+14 etc).*/
#include<stdio.h>
main(){
int s=1, c, sd;
while(s<=800){
c=1;
sd=0;
while(c<s){
if(s%c==0){
sd+=c;
}
c++;
}
if(s==sd){
printf("N�mero Perfeito: %i\n",s);
}
s++;
}
}
