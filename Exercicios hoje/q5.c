#include <stdio.h>

int main() {
    float comprimento, largura, precoPorMetro, custoTotal, perimetro;

    // Solicita ao usuário as dimensões do terreno
    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    // Solicita ao usuário o preço do metro do arame
    printf("Digite o preco do metro do arame (em reais): ");
    scanf("%f", &precoPorMetro);

    // Calcula o perímetro do terreno
    perimetro = 2 * (comprimento + largura);

    // Calcula o custo total para cercar o terreno
    custoTotal = perimetro * precoPorMetro;

    // Imprime o custo total
    printf("O custo total para cercar o terreno e: R$ %.2f\n", custoTotal);

    return 0;
}
