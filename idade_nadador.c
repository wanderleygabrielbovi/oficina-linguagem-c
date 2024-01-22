#include <stdio.h>

int main9(){
    int idade_nadador = 0;

    printf("\nInforme a idade do nadador para obter a classificacao do mesmo: ");
    scanf("%d", &idade_nadador);

    if(idade_nadador < 5){
        printf("Nao ha classificacao. Candidato muito novo!");
    }else if(idade_nadador >= 5 && idade_nadador <= 7){
        printf("Classificacao: infantil A");
    }else if(idade_nadador >=8 && idade_nadador <= 10){
        printf("Classificacao: infantil B");
    }else if(idade_nadador >= 11 && idade_nadador <= 13){
        printf("Classificacao: juvenil A");
    }else if(idade_nadador >= 14 && idade_nadador <= 17){
        printf("Classificacao: juvenil B");
    }else{
        printf("Classificacao: senior");
    }
    return(0);
}
