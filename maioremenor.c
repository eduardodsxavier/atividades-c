#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");

	int numeros[100],menor,maior;
	menor = 1000000000;
	maior = -100000000;

    for (int i = 0; numeros[i-1]!= 0; i++){
        printf("digite um número:\n");
        scanf("%d",&numeros[i]);
        if(numeros[i]==0){
            break;
        }
        else if(numeros[i]>maior){
            maior = numeros[i];
        }
        else if(numeros[i]<maior){
            menor = numeros[i];
        }
    }

    printf("maior número: %d\nmenor número: %d",maior,menor);

	return 0;
}
