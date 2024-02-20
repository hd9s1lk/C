//Implemene um programa que indique se um dado número ineiro é PAR ou
// IMPAR.

#include<stdio.h>

int main(int argc, char*argv[]){

    int num;
    printf("Insira um número inteiro: ");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    }


    return 0;
}