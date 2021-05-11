/*
Considere um algoritmo que vai somar 5 números de um vetor com uma função recursiva.
*/

#include <stdio.h>
#include <stdlib.h>

#define NVETOR 5 //declaração da constante

int somaVetor(int vetor[], int tamanho);

int main() {

    int vetor[NVETOR] = {22, 5, 11, 3, 6}; //atribuição de valores a um vetor
    int i, soma = 0;
    int resultado = somaVetor(vetor, NVETOR); //atribuição de função recursiva a variável resultado

    printf("IMPRESSAO COM A FUNCAO RECURVISA\n");
    printf("Soma = %i\n", resultado);

    printf("\n");

    for (i = 0; i < NVETOR; i++)
    {
        soma += vetor[i];
    }

    printf("IMPRESSAO COM A FUNCAO ITERATIVA\n");
    printf("Soma = %d\n\n", soma);    

    return 0;
}

int somaVetor(int vetor[], int tamanho) {
    if (tamanho == 1)
    {
        return vetor[0];
    } else {
        return vetor[tamanho - 1] + somaVetor(vetor, tamanho -1);
    }
    
}