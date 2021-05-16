#include <stdio.h>
#include <stdlib.h>

//sobre diferença de scanf / scanf_s e gets ou gets_s

int main() {

    int numero = 0;
    char letra = ' ';
    char frase[30];

    printf("Digite um numero:\n");
    //scanf é uma versão mais antiga, ideal é utilizar a scanf_s para compiladores mais atualizados
    // scanf_s("%d", &numero); 

    //para se ler mais caracteres como string devemos usar gets_s ou gets, com o scanf_s poderemos ter erro ou apenas letras e não frases
    gets(frase);

    return 0;
}