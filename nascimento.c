#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ano, nascimento, idade;
	ano = 2023;
	nascimento = 0;
	idade = 0;
	
	printf("digite seu ano de nascimento:\n");
	scanf("%d",&nascimento);
	idade = ano - nascimento;
	printf("%d",idade);
	return 0;
}
