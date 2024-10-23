#include <stdio.h>

int main (){
    float idade;
     
    printf ("Indique a idade do nadador:");
    scanf ("%f", &idade);


    if (idade <= 10){
        printf("Nadador da categoria Infantil");

    }
    if (idade > 10 && idade < 17 ){
        printf("Nadador da categoria Juvenil");
        
    }
    if (idade >= 17){
        printf("Nadador da categoria Senior");
        
    }
}