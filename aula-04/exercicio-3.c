/*
Crie um algoritmo que coloque os dias de semana em forma de identificadores com a estrutura ENUM.
*/

#include <stdio.h>
#include <stdlib.h>

//os identificados enum seguirão uma ordem, se colocarmos um valor diferente do default ele seguirá a partir disso
enum semana {
    domingo = 1, //dessa forma o identificador não será 0
    segunda,
    terca,
    quarta,
    quinta = 25,
    sexta,
    sabado
};

int main() {

    enum semana a, b, c, d, e, f, h; //variáveis que receberão enum

    a = domingo;
    b = segunda;
    c = terca;
    d = quarta;
    e = quinta;
    f = sexta;
    h = sabado;

    printf("Identificador de domingo = %d\n", a);
    printf("Identificador de segunda = %d\n", b);
    printf("Identificador de terca = %d\n", c);
    printf("Identificador de quarta = %d\n", d);
    printf("Identificador de quinta = %d\n", e);
    printf("Identificador de sexta = %d\n", f);
    printf("Identificador de sabado = %d\n", h);

    return 0;
}