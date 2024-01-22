#include <stdio.h>

main7(){
    float a = 0, b = 0, c = 0, soma = 0, media = 0;

    printf("Escreva um numero: ");
    scanf("%f", &a);
    printf("Escreva outro numero: ");
    scanf("%f", &b);
    printf("Escreva mais um numero: ");
    scanf("%f", &c);

    soma = a + b + c;

    if(soma > 50){
        media = soma / 3;
        printf("\nA media aritmetica dos numeros eh: %f", media);
    }else{
        printf("\nA soma dos numeros eh: %f", soma);
    }
}
