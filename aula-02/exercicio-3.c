/*
No algoritmo a seguir, temos a declaração de uma struct com dois membros.
O algoritmo vai ler a matricula e o salário do funcionário, armazenar na struct e depois imprima na tela do usuário os dados armazenados.
*/

# include <stdio.h>
# include <stdlib.h>

//struct é uma estrutura de dados que comporta um conjunto de variáveis mesmo tipo ou tipos diferentes
struct funcionario
{
    int matricula;
    float salario;
}; struct funcionario tecnico; //a variável tecnico irá referencia a struct


int main() {

    printf("\nDigite a matricula do funcionario: ");
    scanf("%i", &tecnico.matricula);
    printf("\nDigite o salario do funcionario: ");
    scanf("%f", &tecnico.salario);

    printf("\n\n A matricula eh %i e o salario eh %.2f", tecnico.matricula, tecnico.salario);

    return 0;
}