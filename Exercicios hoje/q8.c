#include <stdio.h>

int main() {
    int num, invertido = 0;

    // Solicita ao usuário para digitar um número inteiro positivo de três dígitos
    printf("Digite um numero inteiro positivo de tres digitos: ");
    scanf("%d", &num);

    // Verifica se o número é de três dígitos e positivo
    if (num < 100 || num > 999) {
        printf("Erro! O numero deve ser positivo e de tres digitos.\n");
        return 1; // Encerra o programa com um código de erro
    }

    // Inverte os dígitos do número
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }

    // Exibe o número invertido
    printf("Numero gerado: %d\n", invertido);

    return 0;
}
