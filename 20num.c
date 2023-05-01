#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, numeroEscolhido;
    int vezes = 0;
    scanf("%d",&numeroEscolhido);

    for(int i = 0; i < 20; i++){
        scanf("%d",&n);
        if(n == numeroEscolhido) vezes++;
        if(n == -1 || n == EOF) break;
    }
    printf("%d aparece %d vezes", numeroEscolhido, vezes);

	return 0;
}