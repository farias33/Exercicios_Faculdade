#include <stdio.h>

int main() {
    int N, count = 0, num = 1;

    // Solicita ao usuário o número de ímpares a serem impressos
    printf("Digite quantos numeros impares naturais deseja imprimir: ");
    scanf("%d", &N);

    // Imprime os primeiros N números ímpares
    while (count < N) {
        printf("%d ", num);
        num += 2; // Incrementa para o próximo número ímpar
        count++; // Incrementa a contagem de números ímpares impressos
    }
    printf("\n"); // Nova linha após a impressão de todos os números ímpares

    return 0;
}
