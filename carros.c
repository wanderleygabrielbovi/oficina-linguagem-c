//feito pelo chatGPT - construir o código sozinho dps

#include <stdio.h>
#include <string.h>

struct Carro {
    char modelo[50];
    char marca[50];
    int anoFabricacao;
    float valor;
    char cor[20];
};

int main() {
    struct Carro carros[4];
    struct Carro carroMaisCaro;
    float valorMaximo = 0;

    // Leitura dos dados dos carros
    for (int i = 0; i < 4; i++) {
        printf("Carro %d:\n", i + 1);

        printf("Marca: ");
        scanf("%s", carros[i].marca);

        printf("Modelo: ");
        scanf("%s", carros[i].modelo);

        printf("Ano de fabricacao: ");
        scanf("%d", &carros[i].anoFabricacao);

        printf("Valor: ");
        scanf("%f", &carros[i].valor);

        printf("Cor: ");
        scanf("%s", carros[i].cor);

        printf("\n");
    }

    // Verificação dos carros com valor acima de 30.000 ou ano de fabricação acima de 2001
    printf("Carros com valor acima de 30.000 ou ano de fabricacao acima de 2001:\n");
    for (int i = 0; i < 4; i++) {
        if (carros[i].valor > 30000 || carros[i].anoFabricacao > 2001) {
            printf("Marca: %s\n", carros[i].marca);
            printf("Cor: %s\n", carros[i].cor);
            printf("\n");
        }

        // Verificação do veículo mais caro nas cores Prata ou Preto
        if ((strcmp(carros[i].cor, "Prata") == 0 || strcmp(carros[i].cor, "Preto") == 0) && carros[i].valor > valorMaximo) {
            valorMaximo = carros[i].valor;
            carroMaisCaro = carros[i];
        }
    }

    // Apresentação do veículo mais caro nas cores Prata ou Preto
    printf("Veiculo mais caro na cor Prata ou Preto:\n");
    printf("Marca: %s\n", carroMaisCaro.marca);
    printf("Cor: %s\n", carroMaisCaro.cor);
    printf("Modelo: %s\n", carroMaisCaro.modelo);
    printf("Ano de fabricacao: %d\n", carroMaisCaro.anoFabricacao);
    printf("Valor: %.2f\n", carroMaisCaro.valor);

    return 0;
}
