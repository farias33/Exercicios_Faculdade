#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usuário que digite um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o número é divisível por 3 ou 5, mas não por ambos
    if ((numero % 3 == 0 || numero % 5 == 0) && !(numero % 3 == 0 && numero % 5 == 0)) {
        printf("O numero %d e divisivel por 3 ou 5, mas nao por ambos.\n", numero);
    } else {
        printf("O numero %d nao cumpre as condicoes.\n", numero);
    }

    return 0;
}
