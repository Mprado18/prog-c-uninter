//Para iniciar programa em C devemos sempre incluir uma biblioteca
#include <stdio.h> //input e output (toda função deve ser importada)
#include <locale.h> //permite trabalhar com caracteres em português com o setlocale

// main segue mesma lógica do kotlin, porém devemos colocar um tipo antes do mesmo

int ParImpar(int x); //função criada após a main, e sua declaração acima da main para ser ativada

int main ()
{
    setlocale(LC_ALL, "Portuguese"); //irá permite caracteres da linguagem portuguesa nos prints
    printf("Acentuação \n");

   // exemplo de input
   /*
   int x, y, res;
   
   printf("Digite um valor: \n");
   scanf("%i", &x);

   printf("Digite um segundo valor: \n");
   scanf("%i", &y);

   res = x + y;
   printf("O resultado da soma de %i com %i é %i. \n",x, y, res);
   */

   // exemplo com if
   /*
   if (x % 2 == 0)
   {
       printf("O valor %i é par\n ",x);
   } else
   {
       printf("O valor é par \n");
   }
   */

   // exemplo com switch-case
   int value1, value2;
   char op;

   printf("Digite a operação desejada: \n");
   scanf("%c", &op);

   printf("Digite o primeiro valor: \n");
   scanf("%i", &value1);

   printf("Digite o segundo valor: \n");
   scanf("%i", &value2);

   switch (op)
   {
    case '+':
        printf("Resultado %i + %i: %i\n",value1, value2, value1 + value2);
        break;
    case '-':
        printf("Resultado %i - %i: %i\n",value1, value2, value1 - value2);
        break;
    case '*':
        printf("Resultado %i * %i: %i\n",value1, value2, value1 * value2);
        break;
    case '/':
        printf("Resultado %i / %i: %i\n",value1, value2, value1 / value2);
        break;
   default:
        printf("Operação inválida!");
        break;
   }

   // exemplo com while
   int num = 0;
   while (num <= 25)
   {
    if (num % 2 == 0)
    {
        printf("O número %i é par \n",num);
    } else 
    {
       printf("O número %i é ímpar \n",num);
    }
    num++;
   }

   // exemplo com for
    for (int z = 0; z <= 10; z++)
    {
        if (z % 2 == 0)
        {
            printf("O número %i é par \n",z);
        } else 
        {
            printf("O número %i é ímpar \n",z);
        }  
    }

    // funções em C devem ter um tipo antes do nome da função
    // funções com tipo void não tem retorno, exemplo as funções Unit do Kotlin
    int number, result;
    printf("Digite um valor: \n");
    scanf("%d", &number);

    result = ParImpar(number);
   
    return 0; //devemos colocar sempre o retorno 0 e sempre usar ; após expressões
}

int ParImpar(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    } else 
    {
        return 0;
    }
}

/*funções de entrada no C
    scanf_s("%i", &valor); //funciona apenas no visual studio
    scanf("%i", &valor); //funciona em outros compiladores
     //recebe dois parametros: 
    //1º é o tipo de dado a ser lido no teclado
    //2º é o nome da variável
    //deve ser colocado & antes do nome da variável, representa endereço da variável na memória
 */

/*
Tipos de dados em C
    char -> caracter
    int -> inteiro
    float -> real de precisão simples
    double -> real de precisãodupla
    void -> vazio(sem valor)
*/

// operadores artiméticos seguem mesma lógica que kotlin, incrementação/decrementação também

// operadores lógicos seguem mesma lógica do koltin

// estrutura de decisão if e else segue mesma lógica do kotlin e também mesma identação

// em C podemos aninhar estruturas também, exemplo if dentro de if

// estruturas de repetições seguem mesma lógica do kotlin (while / do while)
// estrutura de repetição for é parecida com javascript