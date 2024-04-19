#include <stdio.h>

int main() {
    int num;

    // Solicita ao usuário para digitar um número inteiro de quatro dígitos
    printf("Digite um numero inteiro de quatro digitos: ");
    scanf("%d", &num);

    // Exibe cada dígito em uma linha separada
    printf("Milhar: %d\n", num / 1000); // Extrai o dígito dos milhares
    printf("Centena: %d\n", (num % 1000) / 100); // Extrai o dígito das centenas
    printf("Dezena: %d\n", (num % 100) / 10); // Extrai o dígito das dezenas
    printf("Unidade: %d\n", num % 10); // Extrai o dígito das unidades

    return 0;
}
