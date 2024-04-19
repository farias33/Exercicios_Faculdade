#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Solicita ao usuário para digitar a temperatura em Fahrenheit
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Converte Fahrenheit para Celsius
    celsius = 5.0 / 9.0 * (fahrenheit - 32.0);

    // Exibe a temperatura em Celsius
    printf("Temperatura em Celsius: %.2f\n", celsius);

    return 0;
}
