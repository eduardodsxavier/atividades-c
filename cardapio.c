#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	
	int codigoItem, quantidadeProduto;
	float valorProduto;


	codigoItem = 0;
	valorProduto = 0;
	
	
	printf("qual o codigo do produto: \n");
	scanf("%d",&codigoItem);
	
	switch(codigoItem){
		case 100:
			printf("cachorro quente\nvalor do produto: 1,20");
			valorProduto = 1.20;
			break;
		case 101:
			printf("bauru simples\nvalor do produto: 1,30");	
			valorProduto = 1.30;
			break;
		case 102:
			printf("bauru com ovo\nvalor do produto: 1,50");	
			valorProduto = 1.50;
			break;
		case 103:
			printf("hambúrguer\nvalor do produto: 1,20");	
			valorProduto = 1.20;
			break;
		case 104:
			printf("cheeseburguer\nvalor do produto: 1,30");	
			valorProduto = 1.30;
			break;
		case 105:
			printf("refrigerante\nvalor do produto: 1,00");	
			valorProduto = 1.00;
			break;
		default:
			printf("código invalido.");	
			return 0;
	}
	
	printf("\ndigite quantos produtos vc quer:\n");
	scanf("%d",&quantidadeProduto);
	printf("valor: %.2f",quantidadeProduto*valorProduto);
	
	
	return 0;
}
