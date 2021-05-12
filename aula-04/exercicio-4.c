/*
Crie um algoritmo que coloque três sequencias de escape em forma de identificadores com a estrutura ENUM.
*/

#include <stdio.h>
#include <stdlib.h>

enum escapes {
    nova_linha = '\n',
    tabulacao = '\t',
    backspace = '\b'
};

int main() {

    enum escapes nl, tab, bs;

    nl = nova_linha;
    tab = tabulacao;
    bs = backspace;

    printf("Testando o escape %cde nova linha", nl);
    printf("\n\nTestanto%co%cescape%cde%ctabulacao\n", tab, tab, tab, tab);
    printf("Testando o escape%c de%c backspace\n", bs, bs);

    return 0;
}