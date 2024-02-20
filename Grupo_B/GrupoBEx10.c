//Implemene um programa que indique se um deerminado número aleaório é
// divisível por 3.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[]){

    int num = rand();

    if(num%3==0){
        printf("O numero %d e divisivel por 3", num);
    }else{
        printf("O numero %d nao e divisivel por 3", num);
    }

    return 0;
}