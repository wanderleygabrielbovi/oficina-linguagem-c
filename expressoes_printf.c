#include <stdio.h>

int main3(){
    int x = 0, cubo = 0, quadrado = 0, metade = 0;

    printf("Digite um numero para X: ");
    scanf("%d", &x);

    system("cls");
    cubo = x;
    for(int i = 0; i < 2; i++){
        cubo = cubo * x;
    }
    for( int j = 0; j < 2; j++){
        quadrado = x * x;
    }
    metade = x / 2;

    printf("O cubo de X eh: %d", cubo);
    printf("\nO quadrado de X eh: %d", quadrado);
    printf("\nA metade de X eh: %d", metade);
}
