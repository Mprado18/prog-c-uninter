/*
1-Considere um algoritmo que vai abrir um arquivo .txt e mostrar um errocaso o mesmo não exista.
1A-Considere um algoritmo que vai capturar os caracteres digitados pelo usuário e irá grava-los em um arquivo
.txt usando a função fptuc().
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *arquivo; //ponteiro
    errno_t err; //variável grava o último erro ou sobrescreve o erro atual pelo novo
    int numero;

    //função 3 parametros irá pegar o ponteiro do arquivo, nome do arquivo abaixo caso exista, modo abertura
    //-> r - abre em somente leitura
    //-> w - permite escrever no formato do arquivo, mas substitui o que tiver anteriormente
    //-> a - anexa algo ao arquivo caso já tenha algum valor
    err = fopen_s(&arquivo, "uninter.txt", "a"); //trocar para os tipos de abertura acima para testar

    //valida se o arquivo está vazio, caso sim habilita para inclusão de valor
    if (err == 0)
    {
        printf("Digite um numero inteiro: ");
        do
        {
            numero = getchar(); //captura e retorna um caractere de entrada
            fputc(numero, arquivo); //inclui tipo de dado no arquivo
        } while (numero != '\n');
        
    } else {
        printf("ERRO!! arquivo NAO foi ABERTO!!\n\n");
    }
    
    //valida caso não tenha erro ao fechar o arquivo o mesmo será fechado
    if (arquivo)
    {
        err = fclose(arquivo);
        if (err == 0)
        {
            printf("\nArquivo FECHADO!\n\n");
        } else {
            printf("Arquivo nao foi FECHADO!\n\n");
        }        
    }
    
    return 0;
}