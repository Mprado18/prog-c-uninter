/*
Considere um algoritmo que receberá dois dados numéricos reais (duas notas).
O algoritmo vai calcular e imprimir a média das duas notas.
Sabendo que o tipo da variável será "prova", substitui-se o float pelo typedef.
*/

# include <stdio.h>
# include <stdlib.h>

//typedef nos permite colocar um nome customizado para os tipos de dados (um apelido)
typedef float prova; //aqui o float foi renomeado para prova
typedef int RU;

struct notasAluno
{   
    //estamos usando o tipo renomeado para os membros da struct
    RU matricula;
    prova nota1;
    prova nota2;
}; typedef struct notasAluno n_aluno; //alteramos o nome da struct

int main() {

    n_aluno aluno; //atribuimos a struct a essa nova variável
    prova media = 0; //variável média é do tipo float

    printf("Digite a matricula do aluno: ");
    scanf("%i", &aluno.matricula);

    printf("\nDigite a primeira nota do aluno: ");
    scanf("%f", &aluno.nota1);

    printf("\nDigite a segunda nota do aluno: ");
    scanf("%f", &aluno.nota2);

    media = (aluno.nota1 + aluno.nota2) / 2;

    printf("\nA media final do aluno de matricula RU %i eh: %.0f", aluno.matricula, media);

    return 0;
}