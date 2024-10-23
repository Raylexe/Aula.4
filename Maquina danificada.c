#include <stdio.h>

int main() {
    float pecas;
    float danificadas;
    float porcentagem;


 printf("Quantas pecas produzidas no total?");
 scanf("%f", &pecas);
 printf("Quantas pecas danificadas?");
 scanf("%f", &danificadas);

 porcentagem = (pecas * 0.1);

  if (porcentagem > danificadas){
    printf ("Sem manutencao necessaria");
  }

 if (porcentagem < danificadas){
    printf ("Necessita de manutencao");
  }
}