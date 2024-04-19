#include <stdio.h>

int main() {
    int a, b, c;
    int maior, menor, meio;

    // Solicitar ao usuário que digite três números inteiros
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Determinar o maior, o menor e o número do meio
    if (a > b) {
        if (a > c) {
            maior = a;
            if (b > c) {
                meio = b;
                menor = c;
            } else {
                meio = c;
                menor = b;
            }
        } else {
            maior = c;
            meio = a;
            menor = b;
        }
    } else {
        if (b > c) {
            maior = b;
            if (a > c) {
                meio = a;
                menor = c;
            } else {
                meio = c;
                menor = a;
            }
        } else {
            maior = c;
            meio = b;
            menor = a;
        }
    }

    // Exibir os números em ordem crescente
    printf("Ordem crescente: %d, %d, %d\n", menor, meio, maior);

    // Exibir os números em ordem decrescente
    printf("Ordem decrescente: %d, %d, %d\n", maior, meio, menor);

    return 0;
}
