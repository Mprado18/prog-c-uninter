#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct QUEUE
{
	int dado;
	QUEUE *prox;
}*Head = NULL, *Tail = NULL;

void queue(int valor);
void dequeue();
void display();

int main()
{
	int op, valor, c;

	while (1) {

		system("cls");
		printf("\n****** MENU ******\n");
		printf("1. Colocar na Fila\n2. Remover da Fila\n3. Listar\n4. Sair\n");

		printf("Escolha sua opcao: ");
		scanf_s("%d", &op);
		while ((c = getchar()) != '\n' && c != EOF) {}

		switch (op) {
		case 1:
			printf("Digite um valor para ser inserido: ");
			scanf_s("%d", &valor);
			while ((c = getchar()) != '\n' && c != EOF) {}
			queue(valor); //insere no fim da fila
			break;
		case 2:
			dequeue(); //remove no inicio da fila
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("\nDigite outra opcao.\n");
		}
	}

	system("pause");
	return 0;

}
void queue(int valor)
{
	QUEUE *NovoElemento;
	NovoElemento = (struct QUEUE*)malloc(sizeof(struct QUEUE));
	NovoElemento->dado = valor;

	NovoElemento->prox = NULL;
	if (Head == NULL)
	{
		Head = NovoElemento;
		Tail = NovoElemento;
	}
	else //insere depois do Head
	{
		Tail->prox = NovoElemento;
		Tail = NovoElemento;
	}
	printf("\nInserido com sucesso.\n");
}
void dequeue()
{
	QUEUE *ElementoVarredura = Head;

	if (Head == NULL)
		printf("\nFila vazia.\n");
	else
	{
		Head = Head->prox;
		printf("\nElemento Deletado: %d\n", ElementoVarredura->dado);
		free(ElementoVarredura);
	}
	system("pause");
}
void display()
{
	QUEUE *ElementoVarredura = Head;

	if (Head == NULL)
		printf("\nFila vazia!!!\n");
	else {

		while (ElementoVarredura->prox != NULL) {
			printf("%d--->", ElementoVarredura->dado);
			ElementoVarredura = ElementoVarredura->prox;
		}
		printf("%d--->NULL", ElementoVarredura->dado);
	}
	printf("\n");
	system("pause");
}