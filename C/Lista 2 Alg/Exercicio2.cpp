#include<stdio.h>
main()
{
float x,y,z,w,v;
printf ("Digite um numero: ");
scanf ("%f",&x);
y= (int)x%5;
z= (int)x%10;
w= (int)x%2;
if (y==0){
    printf ("\nNumero divisivel por 5\n");
}
if (z==0){
    printf ("\nNumero divisivel por 10\n");    
}
if (w==0){
    printf ("\nNumero divisivel por 2\n");    
}
else {
    printf ("Nao divisivel por 10, 5 e 2");
}

 

}
