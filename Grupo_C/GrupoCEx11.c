//Implemene um programa que verifque se um número é ou não primo.

#include<stdio.h>
typedef enum BOOLEAN{FALSE=0, TRUE=1};

int main(int argc, char*argv[]){
    
    int num, i, flag;
    printf("Insira um numero: ");
    scanf("%d", &num);

    for(i=2; i < num; i++){
        if(num%i == 0){
            flag = 0;
        } else {
            flag = 1;
        }
    }

    if(flag=1){
        printf("O numero nao e primo");
    } else if (flag=0){
        printf("O numero e primo");
    }

    return 0;
}