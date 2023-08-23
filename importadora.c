#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int pais;
	float valor;
	
	printf("digite o valor do produto:\n");
	scanf("%f",&valor);
	printf("digite o pais de origem do produto:\n1-EUA\n2-França\n3-México\n4-Argentina\n5-China\n");
	scanf("%d",&pais);
	switch (pais) {
		case 1:
			printf("valor total: %.2f",valor + 60.00);
			break;
		case 2:
			printf("valor total: %.2f",valor + 75.50);
			break;
		case 3:
			printf("valor total: %.2f",valor + 50.00);
			break;
		case 4:
			printf("valor total: %.2f",valor + 27.35);
			break;
		case 5:
			printf("valor total: %.2f",valor + 80.00);
			break;
		default:
			printf("opção invalida.");
			return 0;
		
	}
	return 0;
}
