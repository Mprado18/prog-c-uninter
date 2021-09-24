#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int vet[]);

#define TAMANHOVETOR 10

int main()
{

    int vet[TAMANHOVETOR] = {0}; //inicia todas posições do vetor com valor 0
    srand(time(NULL)); //gera semente aleatória

    //inseção de dados
    for (int i = 0; i < TAMANHOVETOR; i++) 
    {
        vet[i] = rand() % 100; //gera os valores aleatório 0 a 99
    }

    printf("VETOR NAO ORDENADO: \n");
    for (int i = 0; i < TAMANHOVETOR; i++)
    {
        printf("%d\n", vet[i]);
    }

    BubbleSort(vet);

    printf("\nVETOR ORDENADO: \n");
    for (int i = 0; i < TAMANHOVETOR; i++)
    {
        printf("%d\n", vet[i]);
    }
    
    return 0;
}

void BubbleSort(int vet[])
{

    int aux;
    for (int n = 0; n <= TAMANHOVETOR; n++)
    {
        for (int i = 0; i < (TAMANHOVETOR - 1); i++)
        {
            if (vet[i] > vet[i + 1]) //crescente
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            } 
        } 
    }
    
}