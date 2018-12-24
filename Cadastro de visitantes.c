#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200

int op;

int menu();

int main(){ //inicio do programa
	
	
	menu();


} //final do programa

int menu(){ //inicio da funcao menu
	
	system("cls");
	printf("\t\tCADASTRO DE CLIENTES\n\nDigite:\n\n(1) - Cadastro\n(2) - Pesquisar\n(3) - Reservado\n\n---> ");
	scanf("%d", &op);
	return op;
	
} //fim da funcao menu


