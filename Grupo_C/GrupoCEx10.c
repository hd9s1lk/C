//Implemene um programa que permia calcular o aorial de um número ineiro,
// endo em cona que: n! = n*(n-1)!; com 0! = 1
// Exemplo: 4! = 4*3*2*1* 0! = 24;

#include<stdio.h>


unsigned int factorial(unsigned int n)
{
    int result = 1, i;
 
    for (i = 2; i <= n; i++) {
        result *= i;
    }
 
    return result;
}
 
int main()
{
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}