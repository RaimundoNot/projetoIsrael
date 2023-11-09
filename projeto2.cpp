#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mercad 10
struct produto{
	char nome[20];
	int quantidade,codigo;
	float preco;
};

int main(){
	int op,n=0,m=1,t=1;
	char pesq[20];	
	struct produto p[mercad];
	
	
	do{
	
	printf("### BEM VINDO AO SISTEMA DE VENDAS ###\n");
	printf("Digite a Opcao desejada: \n");
	printf("1 - Cadastrar Produtos \n");
	printf("2 - Estoque de Produtos \n");
	printf("3 - Pesquisar Produto \n");
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
	default:
			
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
	}
printf("\nDigite 1 p/ CONTINUAR OU 2 p/ SAIR\n");
scanf("%d", &t);
system("cls");
}while(t==1);
	
	
	return 0;
}
