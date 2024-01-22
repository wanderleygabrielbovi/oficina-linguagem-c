#include <stdio.h>

main10(){
    float valorA = 10.00, valorB = 5.25, valorC = 20.00, valorTotal = 0.0;
    int qtdA = 0, qtdB = 0, qtdC = 0;

    printf("Quantos produtos 'A' voce comprou? ");
    scanf("%d", &qtdA);
    printf("Quantos produtos 'B' voce comprou? ");
    scanf("%d", &qtdB);
    printf("Quantos produtos 'C' voce comprou? ");
    scanf("%d", &qtdC);

    valorTotal = (qtdA * valorA) + (qtdB * valorB) + (qtdC * valorC);

    printf("O valor total da compra eh de: R$%.2f", valorTotal);
}
