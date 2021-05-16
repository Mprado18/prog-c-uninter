#include <stdio.h>
#include <stdlib.h>

//sobre casting de variáveis

int main() {

    //casting de variáveis é forçarmos uma variável ser de outro tipo temporariamente

    int x, y; //tipo inteiro
    float div; //resultado será num com ponto flutuante

    printf("Digite um valor: ");
    scanf_s("%d", &x);

    printf("Digite outro valor: ");
    scanf_s("%d", &y);

    //se tentarmos dividir dois inteiros e atribuir a um resultado float o retorno será 0.00
    div = (float)x / (float)y; //precisamos forçar as variáveis x e y serem float temporariamente para o cálculo dar certo
    printf("Resultado da divisao: %.2f\n", div);

    return 0;
}