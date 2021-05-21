#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//struct de vetores para armazenar dados a serem recebidos
struct data {
    char name[46];
    char cpf[16];
    char tel[16];
    char email[41]; 
}; struct data register_data[6]; //variável que referencia struct

int main() {

    char c; //variável para função de limpar buffer

    //ponteiro file para referencia arquivo e atribuição de função para abrir arquivo como modo de escrita
    FILE *file = fopen("3346941.csv", "w"); 

    char *name_adjusted; //ponteiro para receber string do nome

    printf("Arquivo aberto...\n\n"); //msg apenas para usuário saber o que está ocorrendo

    printf("REGISTRO DE DADOS: \n\n");

    fprintf(file, "%s;%s;%s;%s\n", "Nome", "CPF", "Telefone", "Email"); //cabeçalho para arquivo CSV

    printf("Digite um nome: ");
    fgets(register_data[0].name, 45, stdin); //captura string inputada pelo usuário

    printf("\nDigite um CPF: ");
    fgets(register_data[1].cpf, 15, stdin); //captura valor inputado pelo usuário e armazena em tipo string
    while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer do teclado

    printf("\nDigite um telefone: ");
    fgets(register_data[2].tel, 15, stdin); //captura valor inputado pelo usuário e armazena em tipo string
    while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer do teclado

    printf("\nDigite um email: ");
    fgets(register_data[3].email, 40, stdin); //captura string inputada pelo usuário
    while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer do teclado

    name_adjusted = register_data[0].name; //ponteiro recebe vetor de nome da struct
    strtok(name_adjusted, "\n"); //remove último caracter da sting para que na gravação do CSV fique na mesma linha ao invés de pular linha
    
    //função para gravar dados recebidos pelo usuário que foram armazenados nos vetores da struct
    fprintf(
        file, 
        "%s;%s;%s;%s", 
        name_adjusted, 
        register_data[1].cpf, 
        register_data[2].tel, 
        register_data[3].email
    );

    fclose(file); //fecha o arquivo

    printf("\nArquivo fechado...\n\n"); //msg apenas para usuário saber o que está ocorrendo

    return 0;
}