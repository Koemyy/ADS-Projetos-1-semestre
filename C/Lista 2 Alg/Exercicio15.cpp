#include<stdio.h>
main () {

char tipo, L,A,V;
float v,x,y,z;

printf("Digite o tipo de produto Limpeza – L Alimentacao - A Vestuario - V: ");
scanf("%c",&tipo);
printf("Digite o valor do produto: ");
scanf("%f",&v);

if(tipo=='L'){
	
if(v<=100){
	
	x=v*0.5;
	printf("O valor do imposto e de: %2.f",x);
}		
else if(v>=100&&v<=500){
	
	x=v*0.4;
	printf("O valor do imposto e de: %2.f",x);
	
}
else if(v>500){
	x=v*0.2;
	printf("O valor do imposto e de: %2.f",x);
}
}

if(tipo=='A'){
	
if(v<100){
	
	y=v*0.3;
	printf("O valor do imposto e de: %2.f",y);
}		
else if(v>=100&&v<=500){
	
	y=v*0.2;
	printf("O valor do imposto e de: %2.f",y);
	
}
else if(v>500){
	y=v*0.1;
	printf("O valor do imposto e de: %2.f",y);
}
}

if(tipo=='V'){
	
if(v<100){
	
	z=v*0.7;
	printf("O valor do imposto e de: %2.f",z);
}		
else if(v>=100&&v<=500){
	
	z=v*0.6;
	printf("O valor do imposto e de: %2.f",z);
	
}
else if(v>500){
	z=v*0.4;
	printf("O valor do imposto e de: %2.f",z);
}
}
}



