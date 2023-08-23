#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	numero = 0;
	
	printf("digite um número:\n");
	scanf("%d",&numero);
	printf("antecessor: %d\nsucessor: %d",numero-1,numero+1);
	
	return 0;
}
