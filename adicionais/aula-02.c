#include <stdio.h>
#include <stdlib.h>

//sobre função fopen e fopen_s
//fopen é a versão mais antiga da função fopen_s, devemos nos atentar ao compilador para evitar problema

int main() {

    int num;
    FILE *arquivo;
    errno_t err;
    char c;

    //forma de declarar e usar a fopen_s
    err = fopen_s(&arquivo, "teste.txt", "w"); //abrindo arquivo

    //teste de erro
    if (err == 0) 
    {
        printf("O arquivo 'teste.txt' foi aberto\n");
    } else {
        printf("O arquivo 'teste.txt' não foi aberto\n");
    }

    //lendo o num inteiro
    printf("Digite um inteiro: "); 
    scanf_s("%d", &num);
    while ((c = getchar()) != '\n' && c != EOF) {}
    
    //escrevendo o num inteiro no arquivo
    fprintf(arquivo, "%d", num);

    //fechando o arquivo
    if (arquivo)
    {
        err = fclose(arquivo);
        if (err == 0)
        {
            printf("O arquivo 'teste.txt' foi fechado\n");
        } else {
            printf("O arquivo 'teste.txt' não foi fechado\n");
        } 
    }
    
    return 0;
}