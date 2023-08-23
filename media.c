#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num1,num2,num3;
	num1 = 0;
	num2 = 0;
	num3 = 0;
	
	printf("digite 3 números:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("média dos números:%d",(num1+num2+num3)/3);
	return 0;
}
