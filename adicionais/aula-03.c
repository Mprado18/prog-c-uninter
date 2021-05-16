#include <stdio.h>
#include <stdlib.h>

//sobre problema buffer teclado em C

int main() {

    int age;
    char sex;
    char name[20];
    char status;
    char c;

    printf("Digite o primeiro nome: ");
    gets(name);

    printf("\nDigite sua idade: ");
    scanf_s("%d", &age);
    while ((c = getchar()) != '\n' && c != EOF) {} //código para limpar buffer do teclado

    //o buffer do teclado faz com que quando compilado pule a entrada de valor do sexo
    printf("\nDigite o sexo: ");
    scanf_s("%c", &sex);
    while ((c = getchar()) != '\n' && c != EOF) {} //código para limpar buffer do teclado

    printf("\nEstado civil: casado, solteiro ou irrelevante (C/S/I): ");
    scanf_s("%c", &status); 
    while ((c = getchar()) != '\n' && c != EOF) {} //código para limpar buffer do teclado

    if (age >= 16 && sex == 'M') {
        printf("Ola, Mr %s\n", name);
    } else if (age < 16 && sex == 'M') {
        printf("Ola, Master %s\n", name);
    } else if (sex == 'F' && status == 'M') {
        printf("Ola, Mrs %s\n", name);
    } else if (sex == 'F' && (status == 'S' || status == 'I')) {
        printf("Ola, Miss %s\n", name);
    }

    return 0;
}