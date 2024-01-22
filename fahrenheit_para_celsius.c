#include <stdio.h>

main6(){
    float celsius = 0, fahrenheit = 0;

    printf("Quantos graus Farenheit esta fazendo agora? ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;

    printf("A temperatura em graus Farenheit eh de: %fF \nA mesma temperatura em graus Celsius eh de %fC", fahrenheit, celsius);
}
