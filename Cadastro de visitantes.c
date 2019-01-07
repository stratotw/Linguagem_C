#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200

char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int op;

int menu();
void cadastro();
void pesquisa();

int main(){ //inicio do programa
	
	
	inicio: menu();
	switch(op){
		case 1:
			system("cls");
			cadastro();
			goto inicio;
			break;
		case 2:
			system("cls");
			pesquisa();
			goto inicio;
			break;
		case 3:
			system("cls");
			goto inicio;
			break;
		default:
			system("cls");
			printf("Opcao Invalida!");
			goto inicio;
			break;	
}
	
} //final do programa

int menu(){ //inicio da funcao menu
	
	system("cls");
	printf("\t\tCADASTRO DE CLIENTES\n\nDigite:\n\n(1) - Cadastro\n(2) - Pesquisar\n(3) - Reservado\n\n---> ");
	scanf("%d", &op);
	return op;
	
} //fim da funcao menu

void cadastro(){ //inicio da funcao cadastro
	
		static int linha; //
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

void pesquisa(){ //inicio da funcao pesquisa
	
	int cpfPesq, i;
	char emailPesq[50];
	do{
		
		printf("Digite:\n\n(1) - Pesquisa por CPF\n(0) - Pesquisa por email\n\n---> ");
		scanf("%d", &op);
			switch(op){
				case 1:
					system("cls");
					printf("Digite o CPF: ");
					scanf("%d", &cpfPesq);
						for(i = 0; i < SIZE; i++){
							if(cpf[i] == cpfPesq){
								printf("Nome: %s\nE-Mail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
							}
							else{
								system("cls");
								printf("Não Encontrado!\n\nDigite:\n\n(1) - Pesquisar novamente\n(0) - Sair\n\n--> ");
								scanf("%d", &op);
							}	
						}
					break;
				case 2:
					system("cls");
					printf("Digite o email: ");
					scanf("%s", &emailPesq);
						for(i = 0; i < SIZE; i++){
							if(strcmp(email[i], emailPesq)){ //strcmp = compara strings - incluir string.h
								printf("Nome: %s\nE-Mail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
							}
						}
					break;
				default:
					system("cls");
					printf("Opção Invaida!");
					break;	
			}
			system("cls");	
			printf("Digite:\n\n(1) - Pesquisar\n(0) - Sair\n\n--> ");
			scanf("%d", &op);
	}while(op == 1);
	
} //fim da funao pesquisa

