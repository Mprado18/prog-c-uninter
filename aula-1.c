//Para iniciar programa em C devemos sempre incluir uma biblioteca
#include <stdio.h> //input e output (toda função deve ser importada)
#include <locale.h> //permite trabalhar com caracteres em português com o setlocale

// main segue mesma lógica do kotlin, porém devemos colocar um tipo antes do mesmo
int main () {

    setlocale(LC_ALL, "Portuguese"); //irá permite caracteres da linguagem portuguesa nos prints
    printf("Hello World!\n");

    return 0; //devemos colocar sempre o retorno 0 e sempre usar ; após expressões
}

/*
Tipos de dados em C
    char -> caracter
    int -> inteiro
    float -> real de precisão simples
    double -> real de precisãodupla
    void -> vazio(sem valor)
*/