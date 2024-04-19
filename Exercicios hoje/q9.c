#include <stdio.h>

int main() {
    float graus, radianos;
    const float PI = 3.14;

    // Solicita ao usuário para digitar um ângulo em graus
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    // Converte o ângulo de graus para radianos
    radianos = graus * PI / 180;

    // Exibe o ângulo em radianos
    printf("Angulo em radianos: %.2f\n", radianos);

    return 0;
}
