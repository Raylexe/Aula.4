#include <stdio.h>

int main (){
    int primeiro;
    int segundo;
    int terceiro;
    int temp;

    printf("Informe aqui seu primeiro numero:");
    scanf("%d", &primeiro);
    printf("Informe aqui seu segundo numero:");
    scanf("%d", &segundo);
    printf("Informe aqui seu terceiro numero:");
    scanf("%d", &terceiro);

    if(primeiro>terceiro){
        temp=primeiro;
        primeiro=terceiro;
        terceiro=primeiro;
        terceiro=temp;
    }
    if(primeiro>segundo){
        temp=primeiro;
        primeiro=segundo;
        segundo=temp;
    }
    if(segundo>terceiro){
        temp=segundo;
        segundo=terceiro;
        terceiro=temp;
    }

    printf("%d %d %d", primeiro, segundo, terceiro);
}