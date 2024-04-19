#include <stdio.h>

int main() {
    double raio, altura, volume;
    const double PI = 3.141592;

    // Solicita ao usuário o raio e a altura do cilindro
    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    // Calcula o volume do cilindro
    volume = PI * raio * raio * altura;

    // Imprime o volume
    printf("O volume do cilindro é: %.2f unidades cúbicas.\n", volume);

    return 0;
}