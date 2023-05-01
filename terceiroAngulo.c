#include <stdio.h>
#include <stdlib.h>

int main() {
    int ang1, ang2;
    scanf("%d %d",&ang1,&ang2);
    float ang3;
    ang3 = 180.0 - ang1 - ang2;
    printf("3o angulo=%f",ang3);
	return 0;
}