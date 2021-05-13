/*
Crie uma struct de ponteiros com três membros e imprima o endereço das variáveis com o ponteiro e com o operador &.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //struct pode ser incluida dentro ou fora da main
    struct calendario
    {
        int *dia;
        int *mes;
        int *ano;
    }; struct calendario atual; //variável atual referencia struct calendario

    int diaT = 13;
    int mesT = 5;
    int anoT = 2021;

    //para atribuir endereço devemos colocar o & antes do nome da variável
    atual.dia = &diaT;
    atual.mes = &mesT;
    atual.ano = &anoT;

    printf("Endereco da variavel diaT eh: %p\n", &diaT);
    printf("Endereco da variavel mesT eh: %p\n", &mesT); //podemos usar o endereço direto da variável ou
    printf("Endereco da variavel via ponteiro mesT eh: %p\n", atual.mes); //podemos usar o ponteiro da struct
    printf("Endereco da variavel anoT eh: %p\n", &anoT);

    printf("\n\nDia, Mes e Ano\n");
    printf("Dia: %d\n", *atual.dia); //impressão do valor da variável atribuida ao ponteiro dia
    printf("Mes: %d\n", *atual.mes);
    printf("Ano: %d\n", *atual.ano);

    return 0;
}