#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quickSort(int vet[], int inicial, int final);
int particao(int vet[], int inicial, int final);
void troca(int vet[], int i, int j);

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

    quickSort(vet, 0, TAMANHOVETOR - 1);

    printf("\nVETOR ORDENADO: \n");
    for (int i = 0; i < TAMANHOVETOR; i++)
    {
        printf("%d\n", vet[i]);
    }
    
    return 0;
}

void quickSort(int vet[], int inicial, int final)
{

   int pivo;
   if (inicial < final)
   {
       pivo = particao(vet, inicial, final); 
       quickSort(vet, inicial, pivo); //esquerdo
       quickSort(vet, pivo + 1, final); //direito
   }

}

int particao(int vet[], int inicial, int final)
{

    int pivo, pivo_pos, i, j;

    pivo_pos = (inicial + final) / 2;
    pivo = vet[pivo_pos];

    i = inicial - 1;
    j = final + 1;

    while (i < j)
    {
        do //testa lado direito
        {
            j--;
        } while (vet[j] > pivo);
        do //testa lado esquerdo
        {
            i++;
        } while (vet[i] < pivo);
        if (i < j)
        {
            troca(vet, i, j);
        }
    }
    return j;

}

void troca(int vet[], int i, int j)
{

    int aux;
    aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;

}