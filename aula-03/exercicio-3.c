/*
Considere um algoritmo que compara 2 números e imprime o maior. Só que a expressão que faz a comparação será declarada na função Macro #define
*/

#define maior(x, y) x > y ? x : y; //função macro de comparação usando ternário

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 32;
    int b = 28;
    int c = maior(a, b);

    printf("Maior valor eh: %d \n", c);

    return 0;
}