#include <stdio.h>

int main4(){
    int a = 0, b = 0, c = 0, soma = 0, media = 0;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    printf("Digite mais um numero: ");
    scanf("%d", &c);

    soma = a + b + c;
    media = soma / 3;

    printf("\nA media aritmetica dos numeros sao: %d", media);
    return(0);
}
