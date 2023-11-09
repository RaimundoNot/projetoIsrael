#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mercad 10

struct produto{
	char nome[20];
	int quantidade,codigo;
	float preco;
};

struct cliente{ //criado um struct para pesquisa id do cliente
	char nome[20];
	int id;
};

struct venda{ //criado um struct para vendas
	int id_cliente;
	int codigo_produto;
	int quantidade;
	int v=0;
};

int main(){
	int op,n=0,m=1,t=1, id, cod, qtd;
	char pesq[20];	
	struct produto p[mercad];
	struct cliente c[mercad];
	struct venda v[mercad];
	
	do{
	
	printf("### BEM VINDO AO SISTEMA DE VENDAS ###\n");
	printf("Digite a Opcao desejada: \n");
	printf("1 - Cadastrar Produtos \n");
	printf("2 - Estoque de Produtos \n");
	printf("3 - Pesquisar Produto \n");
	printf("4 - Identificacao de cliente \n");
	printf("5 - Compra de Produtos e Nota Fiscal \n");
	scanf("%d", & op);
	system("cls");
		
	switch(op){
	case 1:
	printf("Digite o nome do preduto:\n");
	scanf("%s",& p[n].nome);
	printf("Digite a quantidade:\n");
	scanf("%d",& p[n].quantidade);
	system("cls");		
	system("cls");
	printf("Digite o codigo do preduto:\n");
	scanf("%d",& p[n].codigo);
	system("cls");
	printf("Digite o preco do preduto:\n");
	scanf("%f",& p[n].preco);
	system("cls");	
	n++;
	break;
	case 2:
		if(n==0) {
			printf("### ESTOQUE ESTA VAZIO !!! ###");
			break;
		}
	for(int i=0; i<n; i++){
		printf("Nome do Produto: %s \n",p[i].nome);
		printf("Codigo do Produto: %d \n", p[i].codigo);
		printf("Preco do Produto: R$ %.2f \n",p[i].preco);
		printf("Quatidade : %d\n",p[i].quantidade);	
		printf("----------------------------------\n");	
	}
	break;
	case 3:
		printf("Digite o nome do produto que deseja pesquisar:");
		scanf("%s",& pesq);
		for(int i=0; i<1; i++){		
		if(strcmp(p[i].nome , pesq)==0){
		printf("Preduto: %s\n",p[i].nome);
		printf("Codigo do preduto: %d\n", p[i].codigo);
		printf("Preco do preduto: %.2f\n", p[i].preco);
		printf("----------------------------------\n");
		}
		else{
			printf("Produto NAO Cadastrado!!");
		}
		}
	break;
	case 4:
		printf("Digite o nome do cliente:\n");
		scanf("%s",& c[m].nome);
		printf("Digite o ID do cliente:\n");
		scanf("%d",& c[m].id);
		system("cls");
		m++;
	break;
	case 5:
		printf("Digite o ID do cliente:\n");
		scanf("%d",& id);
		printf("Digite o codigo do produto:\n");
		scanf("%d",& cod);
		printf("Digite a quantidade do produto:\n");
		scanf("%d",& qtd);
		for(int i=0; i<n; i++){
			if(p[i].codigo == cod){
				if(p[i].quantidade >= qtd){
					p[i].quantidade -= qtd;
					v[i].id_cliente = id;
					v[i].codigo_produto = cod;
					v[i].quantidade = qtd;
					i++;
					printf("Compra realizada com sucesso!\n");
					printf("Nota Fiscal:\n");
					printf("Nome do Cliente: %s \n",c[id].nome);
					printf("ID do Cliente: %d \n", c[id].id);
					printf("Nome do Produto: %s \n",p[i].nome);
					printf("Codigo do Produto: %d \n", p[i].codigo);
					printf("Preco do Produto: R$ %.2f \n",p[i].preco);
					printf("----------------------------------\n");	
				}
				else{
					printf("Quantidade insuficiente no estoque!\n");
				}
			}
		}
		system("cls");
	break;
	default:
		printf("Opcao Invalida!!\n");
	break;
	}
printf("\nDigite 1 p/ CONTINUAR OU 2 p/ SAIR\n");
scanf("%d", &t);
system("cls");
}while(t==1);
	
	
	return 0;
}
