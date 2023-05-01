#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3;
    scanf("%f %f %f",&nota1, &nota2, &nota3);

    float media, pond1, pond2;
    media = (nota1 + nota2 + nota3)/3;
    pond1 = (nota1*2 + nota2*2 + nota3*3)/7;
    pond2 = (nota1 + nota2*2 + nota3*2)/5;
    printf("%.2f\n%.2f\n%.2f\n",media,pond1,pond2);
    return 0;
}