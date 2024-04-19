#include <stdio.h>

int main() {
    int numero;
    char *meses[] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    // Solicita ao usuário para digitar o número do mês
    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &numero);

    // Verifica se o número está entre 1 e 12
    if (numero < 1 || numero > 12) {
        printf("Numero invalido! Por favor, digite um numero entre 1 e 12.\n");
        return 1;
    }

    // Exibe o mês correspondente
    printf("Mes: %s\n", meses[numero - 1]);

    return 0;
}
