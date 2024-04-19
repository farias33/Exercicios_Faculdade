#include <stdio.h>

int main() {
    int duracao, minutosAdicionais;
    float custoTotal;
    const float CUSTO_INICIAL = 0.75; // Custo dos primeiros 3 minutos
    const float CUSTO_ADICIONAL = 0.26; // Custo por minuto adicional

    // Solicita ao usuário para digitar a duração total da chamada em minutos
    printf("Digite a duracao total da chamada em minutos: ");
    scanf("%d", &duracao);

    // Verifica se a duração é menor ou igual a 3 minutos
    if (duracao <= 3) {
        custoTotal = CUSTO_INICIAL;
    } else {
        // Calcula minutos adicionais
        minutosAdicionais = duracao - 3;
        // Calcula o custo total
        custoTotal = CUSTO_INICIAL + minutosAdicionais * CUSTO_ADICIONAL;
    }

    // Exibe o custo total da chamada
    printf("O custo total da chamada e: R$ %.2f\n", custoTotal);

    return 0;
}
