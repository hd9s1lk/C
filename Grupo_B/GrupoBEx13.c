//Implemene um programa que permia, aravés da inserção da dimensão dos
//lados de um riângulo, verifcar se se raa de um riângulo reângulo.
//Sugesão: verifcar aravés do Teorema de Piágoras eeuando os cálculos com uma
//aproximação de 0,01.

#include<stdio.h>
#include<stdbool.h>

int main(int argc, char*argv[]){

    float l1,l2,l3;
    printf("Insira a medida do primeiro cateto: ");
    scanf("%f", &l1);

    printf("Insira a medida do segundo cateto: ");
    scanf("%f", &l2);

    printf("Insira a medida da hipotenusa: ");
    scanf("%f", &l3);

    bool retangulo = false;

    float c1,c2, h1;

    c1 = l1*l1;
    c2 = l2*l2;
    h1 = l3*l3;
    
    if(c1+c2==h1){
        retangulo=true;
        printf("E retangulo");
    } else {
        retangulo=false;
        printf("Nao e retangulo");
    }

    return 0;
}
