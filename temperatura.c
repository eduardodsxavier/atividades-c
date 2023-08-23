#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int celcius, fahren;
	
	celcius = 0;
	fahren = 0;
	
	printf("digite uma temperatura em celcius:\n");
	scanf("%d",&celcius);
	
	fahren = ((celcius*9)+160)/5;
	
	printf("temperatura em fahrenheit: %d",fahren);
	return 0;
}
