#include <stdio.h>
#include <math.h>

int main(){
     int folhas;
     int valor1;
     int valor2;

     printf("Insira a quantidade de folhas:");
     scanf("%d", & folhas);  

     printf("Valor: \n");  

     if(folhas > 100){

     valor1=folhas*0.20;

        printf("%d",valor1);
     }
     else
     valor2=folhas*0.25;
     printf("%d",valor2);
 }