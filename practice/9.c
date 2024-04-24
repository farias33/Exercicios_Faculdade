#include <stdio.h>

int main() {
    int N, numero, soma = 0;

    // Solicita ao usuário o valor de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Solicita ao usuário a sequência de N números inteiros
    printf("Digite a sequência de %d números inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numero);

        // Verifica se o número é par
        if (numero % 2 == 0) {
            soma += numero; // Atribui o numero par à variavel soma
        }
    }

    // Exibe a soma dos números pares da sequência
    printf("A soma dos números pares da sequência é: %d\n", soma);

    return 0;
}
