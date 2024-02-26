//Implemene um programa que aça uma conversão enre Euros e Dólares ou vice
//versa consoane a preerência do ulizador. O ulizador deve primeiro escolher o
// po de conversão e depois inserir o valor a converer.
// 1,00 € = 1,16 $

#include<stdio.h>

int main(int argc, char*argv[]){

    int op;
    float euro, dolar, final;
    printf("Que operação deseja (Euros-Dolar(1)) ou (Dolar-Euro(2)): ");
    scanf("%d", &op);

    if(op==1){
        printf("Insira uma quantia de euros: ");
        scanf("%f", &euro);
        final = euro * 1.16;
        printf("Dolar: %f", final);
    } else if (op==2){
        printf("Insira uma quantia de dolares: ");
        scanf("%f", &dolar);
        final = dolar / 1.16;
        printf("Dolar: %f", final);
    }
    return 0;
}