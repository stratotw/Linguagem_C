#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200

int op;

int menu();

int main(){ //inicio do programa
	
	
	menu();
	cadastro();


} //final do programa

int menu(){ //inicio da funcao menu
	
	system("cls");
	printf("\t\tCADASTRO DE CLIENTES\n\nDigite:\n\n(1) - Cadastro\n(2) - Pesquisar\n(3) - Reservado\n\n---> ");
	scanf("%d", &op);
	return op;
	
} //fim da funcao menu

void cadastro(){ //inicio da funcao cadastro
	
		static int linha; 
	do {
		system("cls");
		printf("Digite o nome: ");
		scanf("%s", &nome[linha]);
		system("cls");
		printf("Digite o e-mail: ");
		scanf("%s", &email[linha]);
		system("cls");
		printf("Digite o CPF: ");
		scanf("%s", &cpf[linha]);
		system("cls");
		printf("Digite:\n\n(1) - Novo cadastro\n(2) - Sair\n");
		scanf("%i", &op);
		linha++;
	}while(op == 1);
		
} // fim da funcao cadastro
