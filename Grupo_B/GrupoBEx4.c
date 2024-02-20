//Implemene um programa que convera um valor em byes para um ormao
// legível (Kilo, Mega, Giga ou Tera byes consoane omúlploquemelhorseadape
// a umarepresenação de ácil leiura do valor). Considere 1024 byes = 1Kbyes
// Exemplo: 16548973 byes = 15,78 MB

#include<stdio.h>

int main(int argc, char*argv[]){
    
    int bytes, megabytes;
    printf("Insira o número de bytes: ");
    scanf("%d",&bytes);

    if(bytes=1024){
        printf("Isso equivale a 1Kbytes");
    }

    if(1024<bytes<1048576){
        
    }

    return 0;
}

