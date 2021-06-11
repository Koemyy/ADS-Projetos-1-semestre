#include<stdio.h>
main () {

float id;
printf("Digite sua idade: ");
scanf("%f",&id);

if(id>=5&&id<=7){
	
printf("Infantil A");
}else if (id>=8&&id<=10){
	
	printf("Infantil B");
}else if(id>=11&&id<=13){
	
	printf("Infanto Juvenil");
}else if (id>=14&&id<=17){
	
	printf("Juvenil");
}
else {
	
	printf("Senior");
}
}

