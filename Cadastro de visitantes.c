#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200

char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE][11];
int op;

int menu();
void cadastro();
void pesquisa();
void lista();

int main(){ //inicio do programa
	
	
	inicio: menu();
	switch(op){
		case 1:
			cadastro();
			goto inicio;
			break;
		case 2:
			pesquisa();
			goto inicio;
			break;
		case 3:
			lista();
			system("pause");
			goto inicio;
			break;
		default:
			printf("Opcao Invalida!\n\n");
			system("pause");
			goto inicio;
			break;	
	}
	
} //final do programa

int menu(){ //inicio da funcao menu
	
	system("cls");
	printf("\t\tCADASTRO DE CLIENTES\n\nDigite:\n\n(1) - Cadastro\n(2) - Pesquisar\n(3) - Listar\n\n---> ");
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
		scanf("%d", &cpf[linha]);
		system("cls");
		printf("Nome: %s\ne-mail: %s\nCPF: %i\n\nCADASTRO REALIZADO COM SUCESSO!\n\nDigite:\n\n(1) - Novo cadastro\n(0) - Sair\n\n---> ", &nome[linha], &email[linha], &cpf[linha]);
		scanf("%d", &op);
		linha++;
	}while(op == 1);
		
} // fim da funcao cadastro

void pesquisa(){ //inicio da funcao pesquisa
	
	
	int i;
	int cpfPesquisa[11];
	char emailPesquisa[50];
	
	do{
		system("cls");
		printf("Digite:\n\n(1) - Pesquisa por CPF\n(2) - Pesquisa por email\n(3) - Voltar ao menu\n\n---> ");
		scanf("%d", &op);
			switch(op){
				case 1:
					pesq1: system("cls");
					printf("Digite o CPF: ");
					scanf("%d", &cpfPesquisa);
						for(i = 0; i < SIZE; i++){
							if(cpf[i] == cpfPesquisa){
								system("cls");
								printf("Nome: %s\nE-Mail: %s\nCPF: %d\n\n", nome[i], email[i], cpf[i]);
								system("pause");
								break;
							}
							else{
								system("cls");
								printf("Nao Encontrado!\n\nDigite:\n\n(1) - Pesquisar novamente\n(0) - Voltar para o menu\n\n--> ");
								scanf("%d", &op);
									if(op==1){
										goto pesq1;
									}
								break;					
							}	
						}
					break;
				case 2:
					pesq2: system("cls");
					printf("Digite o email: ");
					scanf("%s", &emailPesquisa);
						for(i = 0; i < SIZE; i++){
							if(strcmp(emailPesquisa,email[i]) == 0){ //strcmp = compara strings - incluir string.h
								system("cls");
								printf("Nome: %s\nE-Mail: %s\nCPF: %d\n\n", nome[i], email[i], cpf[i]);
								system("pause");
								break;
							}
							else{
								system("cls");
								printf("Nao Encontrado!\n\nDigite:\n\n(1) - Pesquisar novamente\n(0) - Sair\n\n--> ");
								scanf("%d", &op);
									if(op==1){
										goto pesq2;
									}	
								break;				
							}	
						}
					break;
				case 3:
					break;
				default:
					system("cls");
					printf("Opção Invaida!");
					break;	
			}
	}while(op == 1);
	
} //fim da funao pesquisa

void lista(){ //inicio da funcao lista
	
	int i;
	
	for(i = 0; i < SIZE; i++){
		if(nome[i] != 0){
			printf("Nome: %s\nE-Mail: %s\nCPF: %d\n\n", nome[i], email[i], cpf[i]);
		}
	}	 
}//Fim da funcao lista
