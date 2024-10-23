#include <stdio.h>

int main (){
    float ladoa;
    float ladob;
    float ladoc;
    printf ("indique o comprimento do primeiro lado:");
    scanf("%f", &ladoa);
    printf("Indique o comprimento do segundo lado:");
    scanf("%f", &ladob);
    printf("Indique o comprimento do terceiro lado");
    scanf("%f", &ladoc);

 if (ladoa + ladob > ladoc && ladob + ladoc > ladoa && ladoc + ladoa > ladob){
    printf ("E possivel formar um triangulo\n");

    if (ladoa == ladob && ladoa == ladoc)
    printf ("E um triangulo equilatero");
      else 
         if ( ladoa == ladob || ladob == ladoc || ladoa == ladoc)
         printf ("E um trisangulo isoceles");
      else 
         printf ("E um triangulo escaleno");

 }
 else 
 printf("Nao e possivel formar um triangulo");
}