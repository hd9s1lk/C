//O preço de um auomóvel écalculado pela soma do preço de ábrica com o preço
// dos imposos (45% do preço deábrica) e a percenagem do revendedor (28% do
// preço de ábrica). Implemene um programa que leia o nome do auomóvel e o
// preço de ábrica e que imprima o nome do auomóvel e o preço final.

#include<stdio.h>

int main(int argc, char*argv[]){

    float precoFabrica, precoImposto, percRe;
    char nome[50];
    printf("Insira o nome do veiculo: ");
    scanf("%s", &nome);

    printf("Insira o preco de fabrica do veiculo: ");
    scanf("%f", &precoFabrica);

    precoImposto = 0.45*precoFabrica;
    percRe = 0.28*precoFabrica;

    float precoFinal = precoFabrica + precoImposto + percRe;

    printf("Preco de fabrica: %f\n", precoFabrica);
    printf("Preco Final: %f\n", precoFinal);
    printf("Automovel: %s\n", nome);


    return 0;
}