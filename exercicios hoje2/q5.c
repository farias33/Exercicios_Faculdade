#include <stdio.h>

int main() {
    float kmAtual, kmAnterior, litrosConsumidos, taxaConsumo;

    // Solicita ao usuário a quilometragem atual
    printf("Digite a quilometragem atual do veiculo: ");
    scanf("%f", &kmAtual);

    // Solicita ao usuário a quilometragem anterior
    printf("Digite a quilometragem anterior do veiculo: ");
    scanf("%f", &kmAnterior);

    // Solicita ao usuário a quantidade de litros consumida
    printf("Digite a quantidade de litros consumida: ");
    scanf("%f", &litrosConsumidos);

    // Calcula a taxa de consumo
    taxaConsumo = (kmAtual - kmAnterior) / litrosConsumidos;

    // Exibe a taxa de consumo
    printf("A taxa de consumo do veiculo e de %.2f quilometros por litro.\n", taxaConsumo);

    return 0;
}
