#include <stdio.h>

main11(){
    float salarioBruto = 0.0, valorHora = 0.0, porcentagemINSS = 0.0, descontoINSS = 0.0, salarioLiquido = 0.0;
    int horasDia = 0, diasSemana = 0, horasMes = 0;
    char nome[30];

    printf("Informe o seu salario bruto: R$");
    scanf("%f", &salarioBruto);
    printf("Quantas horas voce trabalha por dia? ");
    scanf("%d", &horasDia);
    printf("Quantos dias voce trabalha por semana? ");
    scanf("%d", &diasSemana);

    valorHora = (salarioBruto / 30) / 8;
    horasMes = (horasDia * diasSemana) * 4;

    if(salarioBruto == 1320.00){
        porcentagemINSS = 0.075;
    }else if(salarioBruto >= 1320.01 && salarioBruto <= 2571.29){
        porcentagemINSS = 0.09;
    }else if(salarioBruto >= 2571.30 && salarioBruto <= 3856.94){
        porcentagemINSS = 0.12;
    }else if(salarioBruto >= 3856.95 && salarioBruto <= 7507.49){
        porcentagemINSS = 0.14;
    }
    descontoINSS = salarioBruto * porcentagemINSS;
    salarioLiquido = salarioBruto - descontoINSS;

    system("CLS");
    printf("O salario bruto informador foi de: R$%f", salarioBruto);
    printf("\nTrabalha por %d horas mensais", horasMes);
    printf("\nO valor da hora trabalhada eh de: R$%f", valorHora);
    printf("\nO percentual de desconto do INSS para o salario informado eh: %f%", porcentagemINSS * 100);
    printf("\n\nSalario liquido eh de: R$%f", salarioLiquido);
}
