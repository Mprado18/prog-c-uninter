/*
No algoritmo a seguir temos a declaração de uma variável e um ponteiro.
O algoritmo vai ler um número digitado pelo usuário e imprimir na tela o endereço da variável de duas formas:
    1 Chamando a própria variável
    2 Chamando o ponteiro
*/

# include <stdio.h>
# include <stdlib.h>

int main () {

    int x; //variável
    int *y; //ponteiro (é uma variável que recebe o endereço de outra, sempre o tamanho de um inteiro)

    printf("Digite um numero inteiro: \n");
    scanf("%i", &x);

    y = &x; //atribuindo endereço de x ao ponteiro y

    printf("O endereco da variavel x eh: %p\n", &x);
    printf("O endereco da variavel x eh: %p\n", y);

    return 0;
}