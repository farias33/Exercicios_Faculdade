#include <stdio.h>

int main() {
    // Definição do intervalo
    int inicio = 100;
    int fim = 1000;

    // Encontra o primeiro múltiplo de 7 maior ou igual a 100
    int primeiroMultiplo = inicio + (7 - inicio % 7) % 7;

    // Imprime todos os múltiplos de 7 no intervalo especificado
    printf("Múltiplos de 7 entre 100 e 1000:\n");
    for (int num = primeiroMultiplo; num <= fim; num += 7) {
        printf("%d\n", num);
    }

    return 0;
}
