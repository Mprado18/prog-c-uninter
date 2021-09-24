#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaSequencial(int vet[], int buscado);

#define TAMANHOVETOR 10

int main()
{

    int vet[TAMANHOVETOR] = {0}; //inicia todas posições do vetor com valor 0
    int buscado, achado, i;
    srand(time(NULL)); //gera semente aleatória

    //inseção de dados
    for (int i = 0; i < TAMANHOVETOR; i++) 
    {
        vet[i] = rand() % 100; //gera os valores aleatório 0 a 99
    }

    printf("VETOR GERADO: \n");
    for (int i = 0; i < TAMANHOVETOR; i++)
    {
        printf("%d\n", vet[i]);
    }

    printf("\nSelecione o valor que deseja buscar: \n");
    scanf_s("%d", &buscado);

    achado = buscaSequencial(vet, buscado);
    if (achado == -1)
    {
        printf("Valor nao encontrado\n");
    }
    else{
        printf("Valor encontrado na posicao %d. \n", achado);
    }
    
    return 0;
}

int buscaSequencial(int vet[], int buscado)
{

    int achado, i;
    achado = 0;
    i = 0;

    while ((i <= TAMANHOVETOR) && (achado == 0))
    {
        if (vet[i] == buscado)
            achado = 1;
        else 
            i++;
    }

    if (achado == 0)
            return -1;
        else
            return i + 1;

}