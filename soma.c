#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int numero1,numero2;
	numero1 = 0;
	numero2 = 0;
	
	printf("digite 2 numeros:\n");
	scanf("%d %d",&numero1,&numero2);
	printf("%d + %d = %d",numero1,numero2,numero1+numero2);
	return 0;
}
