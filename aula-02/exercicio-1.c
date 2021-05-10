/*
No algoritmo a seguir, temos três variáveis declaradas. Como você faria para imprimir na tela do usuário os endereços de cada variável?
*/

# include <stdio.h>
# include <stdlib.h>

int main () {

    int x, y, z;

    //para imprimir endereço de memória usamos o %p de ponteiro e o &nome_variavel
    printf("O endereco da variavel x eh: %p\n", &x);
    printf("O endereco da variavel x eh: %p\n", &y);
    printf("O endereco da variavel x eh: %p\n", &z);

    system("pause"); //usado para deixar a tela pausada para usuário e só finalizar quando pressionar uma tecla
    return 0; //devido ter de um tipo a função deve retornar algo, usamos 0
}