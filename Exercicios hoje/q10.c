#include <stdio.h>

int main() {
    int ano;

    // Solicita ao usuário para digitar um ano
    printf("Digite um ano para verificar se e bissexto: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

    return 0;
}
