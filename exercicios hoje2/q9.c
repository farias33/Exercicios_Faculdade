#include <stdio.h>

int main() {
    int N, num, soma = 0;

    // Solicita ao usuário para digitar o número de elementos na sequência
    printf("Digite o número de elementos na sequência: ");
    scanf("%d", &N);

    printf("Digite %d números inteiros:\n", N);

    // Lê os N números e soma os pares
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);  // Lê cada número

        // Verifica se o número é par
        if (num % 2 == 0) {
            soma += num;  // Adiciona o número par à soma
        }
    }

    // Imprime a soma dos números pares
    printf("A soma dos números pares é: %d\n", soma);

    return 0;
}
