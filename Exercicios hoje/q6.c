#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    // Solicita ao usuário a temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Converte Celsius para Fahrenheit
    fahrenheit = (9.0 / 5.0 * celsius) + 32.0;

    // Converte Celsius para Kelvin
    kelvin = celsius + 273.15;

    // Exibe os resultados
    printf("Temperatura em Fahrenheit: %.2f F\n", fahrenheit);
    printf("Temperatura em Kelvin: %.2f K\n", kelvin);

    return 0;
}
