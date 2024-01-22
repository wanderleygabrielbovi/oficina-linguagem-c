#include <stdio.h>

main8(){
    int temp = 0;

    printf("\nDigite o valor de uma temperatura: ");
    scanf("%d", &temp);

    if(temp > 38){
        printf("%dC .Muito quente!", temp);
    }else if(temp < 10){
        printf("%dC .Muito fria!", temp);
    }else{
        printf("%dC .Normal!", temp);
    }
}
