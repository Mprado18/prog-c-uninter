#include <stdio.h>
#include <stdlib.h>

int main() {

    int vector[6]; //vetor para receber RU
    int num; //variável contadora para loop for
    int sum; //variável de soma dos elementos do vetor
    int *p_sum_vector = &sum; //ponteiro da soma dos elementos do vetor
    
    printf("Digite o seu RU, sendo um digito de cada vez para que o sistema o armazene!\n");

    //for para incluir cada digito do RU em cada posição do vetor e realizar a soma de cada elemento
    for (num = 0; num < 7; num++) {
        printf("\nDigito[%i]: ", num);
        scanf_s("%i", &vector[num]); //captura cada digito do RU
        sum += vector[num]; //soma cada elemento vetor
    }

    //impressão do resultado da soma dos elementos do vetor através do ponteiro da soma
    printf("\n\nSoma total dos elementos do vetor: %i\n\n", *p_sum_vector);

    return 0;
}