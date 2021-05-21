#include <stdio.h>
#include <stdlib.h>

//estrutura para registro das informações
struct infos {
    char employee[61];
    float salary;
}; struct infos data, *p_infos;

int main() {

    char c; //variável para função de limpar o buffer do teclado
    float aliquot; //variável da aliquota
    float aliquot_percent; //variável para transformar aliquota em percentual
    float tax_amount; //variável para armazenar o resultado do cálculo do imposto

    p_infos = &data; //ponteiro recebendo endereço do registro struct

    printf("Digite o nome do funcionario: ");
    fgets(p_infos->employee, 60, stdin); //captura nome inserido
    while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer do teclado

    printf("\nDigite o salario do funcionario: ");
    scanf_s("%f", &data.salary); //captura salário inserido
    while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer do teclado

    if (p_infos->salary <= 1903.98) {
        aliquot = 0.00;
    } else if (p_infos->salary > 1903.98 && p_infos->salary < 2826.65) {
        aliquot = 0.075;
    } else if (p_infos->salary > 2826.65 && p_infos->salary < 3751.05) {
        aliquot = 0.15;
    } else if (p_infos->salary > 3751.05 && p_infos->salary < 4664.68) {
        aliquot = 0.225;
    } else if (p_infos->salary > 4664.68) {
        aliquot = 0.275;
    }

    aliquot_percent = (aliquot * 100); //tranforma aliquota em percentual para impressão
    tax_amount = (aliquot * p_infos->salary); //calcula quanto é o imposto dependendo da aliquota do salário

    printf("\n\nDADOS DO FUNCIONARIO:\n"); //cabeçalho

    printf("\nNome do funcionario: %s", p_infos->employee); //printf nome funcionário
    printf("\n\nSalario do funcionario: %.2f", p_infos->salary); //printf valor do salário
    printf("\n\nAliquota do imposto de renda para salario recebido: %.2f%%", aliquot_percent); //printf valor do imposto já em formato percentual
    printf("\n\nValor a deduzir do salario R$: %.2f\n\n", tax_amount); //printf do valor calculado do imposto dependendo da aliquota    

    return 0;
}