#include <stdio.h>
#include <stdlib.h>

int multiply(int multiplying, int multiplier); //declarando a função

int main(){

    int m1; //variável do número multiplicando
    int m2; //variável do número multiplicador
    int result; //variável para o resultado

    printf("Digite um numero inteiro para ser o multiplicando: ");
    scanf_s("%d", &m1); //capturando entrada do multiplicando

    printf("\nDigite um numero inteiro para ser o multiplicador: ");
    scanf_s("%d", &m2); //capturando entrada do multiplicador
    
    result = multiply(m1, m2); //atribuindo função recursivo a variável resultado e passando seus parametros para cálculo
    printf("\nO resultado da multiplcacao recursiva entre %d x %d eh: %d\n\n", m1, m2, result);
    
    return 0;
}

//criação da função recursiva
int multiply(int multiplying, int multiplier){
    //valida se o multiplicador é maior que 0 para programa não travar
    if (multiplier > 1) {
        return multiplying + multiply(multiplying, multiplier - 1); //cálcula recursivamente as somas sucessivas
    } else {
        return multiplying; //retorna multiplcando caso multiplicador sejá 0
    }
}