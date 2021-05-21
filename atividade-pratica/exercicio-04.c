#include <stdio.h>
#include <stdlib.h>

void calc_soma(int mat_A[4][4], int mat_B[4][4], int mat_C[4][4]); //declarando função a ser utilizada

int main() {

    //matrizes
    int mat_A[4][4];
    int mat_B[4][4];
    int mat_C[4][4];

    int i, j, value;

    printf("Insira um valor inteiro para a Matriz A: \n");
    //loop for para capturar elementos matriz A para posição i e j
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("\nElemento[%i][%i] da Matriz A: ", i, j);
            scanf_s("%i", &mat_A[i][j]); //captura entrada de i e j e atribui a posição correta na matriz
        }
    }

    printf("\nInsira um valor inteiro para a Matriz B: \n");
    //loop for para capturar elementos matriz B para posição i e j
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("\nElemento[%i][%i] da Matriz B: ", i, j);
            scanf_s("%i", &mat_B[i][j]); //captura entrada de i e j e atribui a posição correta na matriz
        }
    }

    //condição if para caso entre um valor negativo em alguma matriz encerrar o programa
    if (mat_A[i][j] < 0 || mat_B[i][j] < 0) {
        printf("\nFoi digitado um numero negativo para matriz, programa encerrando...\n\n");
    } else {
        calc_soma(mat_A, mat_B, mat_C); //invoca função passando as matrizes como argumento

        printf("\nA soma da Matriz A com a Matriz B, resulta em: \n\n");
        printf(" MATRIZ C\n\n");
        //loop for para realizar acessar e imprimir cada valor resultante da soma das matrizes A e B que estão na matriz C
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                value = mat_C[i][j];
                printf(" %i ", value);
            }
            printf("\n");
        }
    }

    return 0;
}

//função para realizar soma das matriz e atribuição de resultado a nova matriz
void calc_soma(int mat_A[4][4], int mat_B[4][4], int mat_C[4][4]) {

    int i, j;
    int value;

    //loop for para acesar cada elemento das posições das matrizes A e B e somar e atribuir a o resultado a matriz C
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            value = mat_A[i][j] + mat_B[i][j];
            mat_C[i][j] = value;
        }
    }   
}