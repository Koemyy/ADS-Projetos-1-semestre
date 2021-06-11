#include<stdio.h>
main () {

char resp;
float h,p,x,y;
printf("Resposta (F/M): ");
scanf(" %c",&resp);
printf("Entre com seu peso: ");
scanf("%f",&p);
printf("Entre com sua altura: ");
scanf("%f",&h);

if(resp=='M'){
x=72.7*h;
x=x-58;


if(x<=p){
printf ("\n*** Peso normal ou abaixo do ideal para o sexo M ***\n");
}
else if(x!=p){
printf ("\n*** Peso acima do Ideal para o sexo M***\n");
}
}


else(resp=='F');{
y=62.1*h;
y=y-44.7;


if(y<=p){
printf ("\n*** Peso normal ou abaixo do ideal para o sexo F***\n");
}
else if(y!=p){
("\n*** Peso acima do Ideal para o sexo F***\n");
}
}

}
