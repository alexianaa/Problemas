#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[1000];
    int n;

    // ler 1000 numeros 
    for(int i = 0; i < 1000; i++){
        scanf("%d",&n);
        num[i] = n;
    }

    // inteiro N
    int numeroEscolhido;
    scanf("%d",&numeroEscolhido);

    // printar quantas vezes ele aparece nos 1000 primeiros
    int vezes = 0;
    for (int i = 0; i < 1000; i++){
        if(num[i] == numeroEscolhido) vezes++;
    }
    printf("%d aparece %d vezes\n", numeroEscolhido, vezes);

    // se o proximo for -1 acaba se nao le outros 999 numeros e repete
    scanf("%d",&n);
    while (n != -1 || n != EOF){
        num[0] = n;
        for(int i = 1; i < 1000; i++){
            scanf("%d",&n);
            num[i] = n;
        }

        scanf("%d",&numeroEscolhido);
        int vezes = 0;
        for (int i = 0; i < 1000; i++){
            if(num[i] == numeroEscolhido) vezes++;
        }
        printf("%d aparece %d vezes\n", numeroEscolhido, vezes);

        scanf("%d",&n);
    }

	return 0;
}