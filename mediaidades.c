#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");

	int idades[100],menor,maior,media,index;
	menor = 200;
	maior = -1;
	media = 0;
	index = 0;

    for (int i = 0; idades[i-1]!= 0; i++){
        printf("digite uma idade:\n");
        scanf("%d",&idades[i]);
        if(idades[i]==0){
            break;
        }
        if(idades[i]>maior){
            maior = idades[i];
        }
        if(idades[i]<menor){
            menor = idades[i];
        }
        media = media + idades[i];
        index = i+1;
    }

    printf("maior idade: %d\nmenor idade: %d\nmedia das idades: %d",maior,menor,media/index);

	return 0;
}
