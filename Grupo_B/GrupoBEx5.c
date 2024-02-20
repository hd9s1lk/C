//Implemene um programa de uma máquina de calcular com as 4 operações
// básicas.

#include<stdio.h>

int main(int argc, char*argv[]){

    int op;
    int num1, num2;

    printf("Insira qual a operação que deseja efetuar(1 -> +/2 -> -/3 -> */4 -> /): ");
    scanf("%d", &op);

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    

    if(op == 1){
        int soma = num1 + num2;
        printf("Resultado Final: %d", soma);
    }

    if(op == 2){
        int sub = num1 - num2;
        printf("Resultado Final: %d", sub);
    }

    if(op == 3){
        int multi = num1 * num2;
        printf("Resultado Final: %d", multi);
    }

    if(op == 4){
        int soma = num1 / num2;
        printf("Resultado Final: %d", soma);
    }

    return 0;
}