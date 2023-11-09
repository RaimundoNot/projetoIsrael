#include<stdio.h>
#include<stdlib.h>

struct produto{
	char nome[20];
	int codigo;
	float preco;
};

int main(){
	int n=0;
	char pesq[20];
	int b;
	int find = 0; //criada para achar o produto
	
	printf("Quantos produtos deseja cadastrar?");
	scanf("%d",& n);
	system("cls");
	struct produto p[n];
	//cadastro do produto
	for(int i=0; i<n;i++){		
	printf("Digite o nome do %dº produto:\n",i+1);
	scanf("%s",& p[i].nome);
	system("cls");
	printf("Digite o codigo do produto:\n");
	scanf("%d",& p[i].codigo);
	system("cls");
	printf("Digite o preco do produto:\n");
	scanf("%f",& p[i].preco);
	system("cls");
	
	//Pesquisar produto / mudar para o do while
	do{
	
	printf("Digite o codigo do produto que deseja pesquisar ou 0 para sair:\n");
	scanf("%d", & b);
	
	if(b == 0) break; 
		find = 0; // reinicia a variável find
		for(int i=0; i<n ; i++){
			if(b==p[i].codigo){
				printf("Produto: %s\n",p[i].nome);
				printf("Codigo do produto: %d\n", p[i].codigo);
				printf("Preco do produto: %.2f\n", p[i].preco); 
				find = 1; // indica que o produto foi encontrado
				break; 
			}
		}
		if(find == 0){ 
			printf("Produto nao Cadastrado!!\n");
		}
	}while(1); 
	
}
return 0;
}
