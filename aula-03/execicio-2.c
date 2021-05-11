/*
Considere um algoritmo que vai imprimirna tela do usuário os números de 1 a 20 (duas vezes), a primeira vez usando laço de repetição for e a segunda vez usando função recursiva.
*/

#include <stdio.h>
#include <stdlib.h>

int imprimirJ(int inicio, int fim); //declaração da função

int main() {

    //laço de repeticação considerando função recursiva
    int inicio = 1;
    int fim = 21;

    printf("Laco de repeticao funcao recursiva: \n");
    imprimirJ(inicio, fim);

    //laço de repetição considerando o for
    printf("\n\nLaco de repeticao for: \n");
    int i = 0;

    for (i; i <= 20; i++)
    {
        printf("%i ", i);
    }

    //laço de repetição considerando while
    printf("\n\nLaco de repeticao while: \n");
    while (inicio < fim)
    {
        printf("%d ", inicio);
        inicio++;
    }
    
    return 0;
}

//declaramos acima do main as funções que serão usadas, estas devem ser criadas abaixo do main
//função recursiva
int imprimirJ(int inicio, int fim) {
    if (inicio < fim)
    {
        printf("%d ", inicio); //impressão dos números de forma individual
        imprimirJ(inicio + 1, fim); //chamando a função dentro de si mesma (recursividade)
    }
    
}