#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Solicita ao usuário o valor de N
    printf("Informe N: \n");
    scanf("%d", &n);

    // Verifica se N é positivo e inteiro
    if (n > 0 && n == floor(n)) {
        // Inicializa uma variável para contar o número de ímpares impressos
        int count = 0;

        // Itera sobre os números naturais a partir de 1, imprimindo os ímpares
        for (int i = 1; count < n; i += 2) {
            printf("%d\n", i);
            count++;
        }
    } else {
        printf("O valor digitado não é inteiro e/ou natural.\n");
    }

    return 0;
}
