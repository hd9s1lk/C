//Implemene um programa que permia, aravés da inserção da dimensão dos
//lados de um riângulo, idenfcar de que po de riângulo se raa. Considere
//apenas as seguines siuações:
//Isósceles- dois lados iguais e um dierene; Equiláero- odos os lados iguais;
//Escaleno- odos os lados dierenes.

#include<stdio.h>

int main(int argc, char*argv[]){
    
    float l1,l2,l3;
    printf("Insira a medida do primeiro cateto: ");
    scanf("%f", &l1);

    printf("Insira a medida do segundo cateto: ");
    scanf("%f", &l2);

    printf("Insira a medida da hipotenusa: ");
    scanf("%f", &l3);

    float c1,c2, h1;

    c1 = l1*l1;
    c2 = l2*l2;
    h1 = l3*l3;
    
    if(c1==c2==h1){
        printf("E equilatero");
    } else if (c1==c2 || c1==h1 || c2==h1) {
        printf("E isosceles");
    } else if (c1!=c2 && c1!=h1 || c2!=h1 && c2!=c1) {
        printf("E escaleno");
    }

    return 0;
}