/*
Alunos envolvidos: 
Raimundo Mota de Oliveira Neto
Raimundo Camilo de Oliveira Neto
Paulo Vinicius Cruz Rodrigues
Wendel dos Santos Lemos
Thiago Silva da Silva
*/
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
	double Total=0;
	int op,n=4,t=1,qtd;
	char pesq[20],nomeCliente[20];	
	//nomeando os produtos pré-cadastrados
	struct produto p[mercad]={
	{"Arroz"},
	{"Feijao"},
	{"Refrigerante"},
	{"Macarrao"}
	};
	//Criação de 5 Produtos pelo desenvolvedor, para ter um estoque pré-pronto
	
	p[0].codigo=123;
	p[0].preco=4.50;
	p[0].quantidade=14;
	
//	p[1].nome={{"Feijão"}};	
	p[1].codigo=124;
	p[1].preco=6.80;
	p[1].quantidade=14;
	
	
	p[2].codigo=126;
	p[2].preco=5.50;
	p[2].quantidade=14;
	
	
	p[3].codigo=129;
	p[3].preco=3.50;
	p[3].quantidade=14;
	
	//Menu
	do{
	printf("### BEM VINDO AO SISTEMA DE VENDAS ###\n");
	printf("Digite a Opcao desejada: \n");
	printf("1 - Cadastrar Produtos \n");
	printf("2 - Ver Estoque de Produtos \n");
	printf("3 - Pesquisar Produto \n");
	printf("4 - Comprar Produtos \n");
	scanf("%d", & op);
	system("cls");
		
	switch(op){
	case 1:
	printf("Digite o nome do produto:\n");
	scanf("%s",& p[n].nome);
	printf("Digite a quantidade:\n");
	scanf("%d",& p[n].quantidade);
	system("cls");		
	system("cls");
	printf("Digite o codigo do produto:\n");
	scanf("%d",& p[n].codigo);
	system("cls");
	printf("Digite o preco do produto:\n");
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
		for(int i=0; i<n; i++){		
		if(strcmp(p[i].nome , pesq)==0){
		printf("Produto: %s\n",p[i].nome);
		printf("Codigo do produto: %d\n", p[i].codigo);
		printf("Preco do produto: %.2f\n", p[i].preco);
		printf("----------------------------------\n");
		}
		else if(i==n){
			printf("Produto NAO Cadastrado!!");
		}
		}
	break;
	case 4:
    printf("Digite o Nome do cliente:\n");
    scanf("%s",& nomeCliente);
    system("cls");
    
    for(int i=0; i<n; i++){
    printf("Nome do Produto: %s \n",p[i].nome);
    printf("Codigo do Produto: %d \n", p[i].codigo);
    printf("Preco do Produto: R$ %.2f \n",p[i].preco);
    printf("Quatidade : %d\n",p[i].quantidade);    
    printf("----------------------------------\n");    
    }
    
    printf("Digite o nome do produto que deseja Comprar:");
    scanf("%s",& pesq);
    printf("Digite a quantidade do produto:\n");
    scanf("%d",& qtd);
    system("cls");
    int found = 0;//adicionado uma variável booleana para verificar se o produto foi Cadastrado.
    for(int i=0; i<n; i++){
        if(strcmp(p[i].nome , pesq)==0){
            found = 1;
            if(p[i].quantidade >= qtd){
                
                p[i].quantidade -= qtd;
                
                Total=p[i].preco*qtd;
                
                printf("Compra realizada com sucesso!\n");
                printf("Nota Fiscal:\n");
                printf("Nome do Cliente: %s \n",nomeCliente);
                printf("Nome do Produto: %s \n",p[i].nome);
                printf("Codigo do Produto: %d \n", p[i].codigo);
                printf("Preco do Produto: R$ %.2f \n",p[i].preco);
                printf("Quantidade do produto: %d\n",qtd);
                printf("Total a Pagar: R$ %.2f\n",Total);
                printf("----------------------------------\n");    
            }
            else{
                printf("Quantidade insuficiente no estoque!\n");
            }
        }
    }
    if(found == 0){
        printf("Produto nao cadastrado\n");
    }
break;
	}
printf("\nDigite 1 p/ CONTINUAR OU 2 p/ SAIR\n");
scanf("%d", &t);
system("cls");
}while(t==1);
	
	
	return 0;
}
