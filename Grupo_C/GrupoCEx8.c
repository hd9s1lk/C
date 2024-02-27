//Implemene um programa que permia enconrar o maior e menor número de
//uma série de números posivos ornecidos. A sequência ermina com o número
//‘0’.

#include<stdio.h>

int main(int argc, char*argv[]){


    int maior, menor, i=0, num=0, op;

    printf("Insira um numero: ");
    scanf("%d", &num);
    maior=num;
    menor=num;

    while(num!=0){
        printf("Insira um numero: ");
        scanf("%d", &num);
        if(num>maior){
            maior = num;
        } else if(num<menor) {
            menor = num;
        }

    }

    printf("Maior: %d ; Menor: %d", maior, menor);


    return 0;
}