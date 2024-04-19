#include <stdio.h>

int main() {
    int a, b, c;

    // Solicita ao usuário para digitar três números inteiros
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Verifica se os valores podem formar um triângulo
    if (a < b + c && b < a + c && c < a + b) {
        // Os valores formam um triângulo
        if (a == b && b == c) {
            // Todos os lados são iguais
            printf("Os valores formam um triangulo equilatero.\n");
        } else if (a == b || a == c || b == c) {
            // Dois lados são iguais
            printf("Os valores formam um triangulo isosceles.\n");
        } else {
            // Todos os lados são diferentes
            printf("Os valores formam um triangulo escaleno.\n");
        }
    } else {
        // Os valores não podem formar um triângulo
        printf("Os valores nao podem formar um triangulo.\n");
    }

    return 0;
}
