#include <stdio.h>

main12(){
    float salarioAtual = 0.0, novoSalario = 0.0, aumentoSalarial = 0.3;

    printf("Qual seu salario atual? R$");
    scanf("%f", &salarioAtual);
    novoSalario = salarioAtual * aumentoSalarial;
    novoSalario = novoSalario + salarioAtual;

    printf("\nCom o aumento salarial, seu salario agora eh: R$%.2f", novoSalario);
}
