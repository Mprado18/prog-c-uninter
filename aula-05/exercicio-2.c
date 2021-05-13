/*
Crie um algoritmo com ponteiro e uma struct com três membros e imprima as instâncias da struct com os ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    struct aulaPratica
    {
        int x;
        int y;
        int z;
    }; struct aulaPratica numero, *p_numero;

    p_numero = &numero;

    (*p_numero).x = 890;
    (*p_numero).y = 15;
    (*p_numero).z = 12457465;

    /* OUTRA ALTERNATIVA DE ATRIBUIR VARIÁVEL A PONTEIRO
    p_numero -> x = 890;
    p_numero -> y = 15;
    p_numero -> z = 12457465; */

    printf("Dado de x = %i\n", numero.x);
    printf("Dado de y = %i\n", numero.y);
    printf("Dado de z = %i\n", numero.z);

    return 0;
}