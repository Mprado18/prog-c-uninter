/*
Considere um algoritmo que vai instanciar vetor de 4 posições na memória usando a função calloc()
*/

// função calloc coloca 0 em todos os bits da memória para caso tenha alguma sujeira não interferir.
#include <stdio.h>
#include <stdlib.h>

//define para criarmos função macro ou constantes
#define QTE 4 //constante
#define SAIR exit(1) //função macro

int main() {

    int *px; //ponteiro

    px = (int*)calloc(QTE, sizeof(int)); //função calloc retorna null caso não tenha espaço em memória
    if (px == NULL) //valida se for null encerra programa
    {
        printf("ERRO! Nao tem memoria suficente.");
        SAIR; //finaliza o programa
    }
    
    int i; //contador do for

    printf("DIGITAR OS DADOS PARA O VETOR DE 4 POSICOES.\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("Digite px[%d]: ", i);
        scanf("%d", &px[i]);
    }

    printf("\nMOSTRAR OS DADOS DO VETOR\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("Posicao px[%d]: %d\n", i, px[i]);
    }

    printf("\n");

    free(px); //libera a memória        

    return 0;
}