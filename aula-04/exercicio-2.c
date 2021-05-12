/*
Considere um algoritmo que realiza a leitura do texto de um arquivo .txt usando a função fgetc().
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *arquivo;
    char locaMemoria[81];
    int i, ch;

    //abrir o arquivo para ler a linha
    fopen_s(&arquivo, "uninter2.txt", "r");
    if (arquivo == NULL)
    {
        exit(0);
    }
    
    //leia os primeiros 80 caracteres e coloque-os em "locaMemoria"
    ch = fgetc(arquivo);

    /*feof validao indicador de fim do arquivo EOF do fluxo e retorna um valor diferente de zero se este indicador estiver setado*/
    for (i = 0; (i < 80) && (feof(arquivo) == 0); i++)
    {
        locaMemoria[i] = (char)ch;
        ch = fgetc(arquivo); //captura cada caratere do laço de repetição na leitura do arquivo
    }
    
    //adiciona null ao final da string
    locaMemoria[i] = '\0';

    printf("%s\n\n\n", locaMemoria);
    fclose(arquivo);

    return 0;
}