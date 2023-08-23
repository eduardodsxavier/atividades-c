#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float numero1, numero2;
	numero1 = 0;
	numero2 = 0;
	
	printf("digite 2 números:\n");
	scanf("%f %f",&numero1,&numero2);
	if (numero2 ==0){
		printf("divisão invalida");
		return 0;
	}
	printf("%.2f / %.2f = %.2f",numero1,numero2,numero1/numero2);
	return 0;
}
