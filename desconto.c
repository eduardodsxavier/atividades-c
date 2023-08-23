#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float num;
	char opcao;
	num = 0;
	
	printf("forma de pagamento:\nv-a vista\nc-cartão de credito\n");
	scanf("%c",&opcao);
	
	printf("informe o valor do produto:\n");
	scanf("%f",&num);
	
	switch (opcao){
		case 'v':
			printf("desconto de 10 %%\nvalor = %.2f",(num/100)*90);
			break;
		case 'c':
			printf("desconto de 5 %%\nvalor = %.2f",(num/100)*95);
			break;
		default:
			printf("opção invalida");
			break;
		}
	return 0;
}
