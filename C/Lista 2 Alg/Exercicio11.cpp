#include<stdio.h>
main () {

float p,h,r;
printf("Digite seu peso em kg: ");
scanf("%f",&p);
printf("Digite sua altura em metros: ");
scanf("%f",&h);

r=p/(h*h);

if(r<20){
	printf("Abaixo do peso ideal");
}
else if(r>20&&r<25){

printf("Peso normal");

}
else if(r>25&&r<30){
	
	printf("Excesso de peso");	
}
else if(r>30&&r<35){
	
	printf("Obesidade");
}
else if(r>35){
	printf("Obesidade morbita");
}
}
