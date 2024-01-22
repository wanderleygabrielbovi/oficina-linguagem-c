#include <stdio.h>

main5(){
    float celsius = 0, fahrenheit = 0;

    printf("Quantos graus celsius esta fazendo agora? ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160)/5;

    system("cls");
    printf("A temperatura atual eh de: %fC \nEm graus fahrenheit esta mesma tempreratura eh: %fF", celsius, fahrenheit);
}
