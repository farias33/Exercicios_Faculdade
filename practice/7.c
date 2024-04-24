#include <stdio.h>

int main() {
    int valor, moedas100, moedas50, moedas10, moedas5, moedas1;

    // Solicita ao usuário o valor em merreca
    printf("Digite o valor em merreca: ");
    scanf("%d", &valor);

    // Calcula o número de moedas de M$ 100 necessárias
    moedas100 = valor / 100; 
    valor = valor % 100; 

    // Calcula o número de moedas de M$ 50 necessárias
    moedas50 = valor / 50;
    valor %= 50;

    // Calcula o número de moedas de M$ 10 necessárias
    moedas10 = valor / 10;
    valor %= 10;

    // Calcula o número de moedas de M$ 5 necessárias
    moedas5 = valor / 5;
    valor %= 5;

    // O valor restante corresponde ao número de moedas de M$ 1 necessárias
    moedas1 = valor;

    // Exibe o número de moedas de cada tipo necessárias para perfazer o valor
    printf("Número de moedas necessárias:\n");
    printf("%d moeda(s) de M$ 100,00\n", moedas100);
    printf("%d moeda(s) de M$ 50,00\n", moedas50);
    printf("%d moeda(s) de M$ 10,00\n", moedas10);
    printf("%d moeda(s) de M$ 5,00\n", moedas5);
    printf("%d moeda(s) de M$ 1,00\n", moedas1);

    return 0;
}
