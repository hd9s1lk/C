//Implemene um programa que permia eeuar a soma dos 180 primeiros
// números ineiros posivos.


#include<stdio.h>

int main(int argc, char*argv[]){
    
    int sum;
    int i=0;
    while(i<180){
        i++;
        sum = sum +1;
    }

    printf("%d", sum);

    return 0;
}
