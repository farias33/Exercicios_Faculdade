#include <stdio.h>

int main() {
    int dia, mes, ano;
    const int ANO_ATUAL = 2015;
    int diasNoMes;

    // Solicita ao usuário para digitar a data de nascimento
    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    // Testa a validade do ano
    if (ano < 0 || ano > ANO_ATUAL) {
        printf("Data invalida - ano invalido.\n");
        return 1;
    }

    // Testa a validade do mês
    if (mes < 1 || mes > 12) {
        printf("Data invalida - mes invalido.\n");
        return 1;
    }

    // Determina o número de dias no mês
    switch (mes) {
        case 2: // Fevereiro
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                diasNoMes = 29; // Ano bissexto
            } else {
                diasNoMes = 28;
            }
            break;
        case 4: // Abril
        case 6: // Junho
        case 9: // Setembro
        case 11: // Novembro
            diasNoMes = 30;
            break;
        default:
            diasNoMes = 31;
    }

    // Testa a validade do dia
    if (dia < 1 || dia > diasNoMes) {
        printf("Data invalida - dia invalido.\n");
        return 1;
    }

    // Se passar por todas as verificações, a data é válida
    printf("Data valida.\n");

    return 0;
}
