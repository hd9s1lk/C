//Implemene um programa que permia aceiar um valor numérico que apenas
// pode ser posivo. Se não or posivo deve insisr na leiura.

#include<stdio.h>

int main(int argc, char*argv[]){

    int num;
    printf("Insira um número positivo: "),
    scanf("%d", &num);

    while(num<0){
        printf("Insira um número positivo: ");
        scanf("%d", &num);
    }
    return 0;
}