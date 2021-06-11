#include<stdio.h>
main () {
	
	float vmax, vm,r;
	printf("Digite a velociade maxima permitida na avenida que deseja: ");
	scanf("%f",&vmax);
	printf("\nVelocidade que estava dirigindo nessa mesma avenida: ");
	scanf("%f",&vm);
	
	if (vm<=(vmax+10)){
		r=50*vm;
	}
}

