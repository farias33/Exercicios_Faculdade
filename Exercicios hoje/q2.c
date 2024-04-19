#include <stdio.h>

int main() {
    float valorTotal, primeiroGanhador, segundoGanhador, terceiroGanhador;

    // Solicitar ao usuário o valor total do prêmio
    printf("Digite o valor total do premio em R$: ");
    scanf("%f", &valorTotal);

    // Calcular a quantia recebida por cada ganhador
    primeiroGanhador = valorTotal * 0.46;  // 46% para o primeiro ganhador
    segundoGanhador = valorTotal * 0.32;   // 32% para o segundo ganhador
    terceiroGanhador = valorTotal - (primeiroGanhador + segundoGanhador); // Restante para o terceiro

    // Imprimir o valor recebido por cada ganhador
    printf("O primeiro ganhador recebera: R$ %.2f\n", primeiroGanhador);
    printf("O segundo ganhador recebera: R$ %.2f\n", segundoGanhador);
    printf("O terceiro ganhador recebera: R$ %.2f\n", terceiroGanhador);

    return 0;
}
