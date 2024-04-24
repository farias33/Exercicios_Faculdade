#include <stdio.h>
#include <math.h>
//Toda a vez que for pedido um MENU DE OPCOES, eh mais facil usar switch - case
int main() {
    float a, b, c;
    char opcao;

    printf("Digite os 3 valores: ");
    scanf("%f%f%f", &a, &b, &c);
    //Menu de opcoes
    printf("Escolha uma opção:\n");
    printf("a) Calcular a área do triângulo\n");
    printf("b) Calcular a área do círculo\n");
    printf("c) Calcular a área do trapézio\n");
    printf("d) Calcular a área do quadrado\n");
    printf("e) Calcular a área do retângulo\n");
    printf("Opção: ");

    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
            printf("A área do triângulo é: %.2f\n", (a * b) / 2);
            break;
        case 'b':
            printf("A área do círculo é: %.2f\n", 3.14 * pow(c, 2));
            break;
        case 'c':
            printf("A área do trapézio é: %.2f\n", ((a + b) * c) / 2);
            break;
        case 'd':
            printf("A área do quadrado é: %.2f\n", pow(b, 2));
            break;
        case 'e':
            printf("A área do retângulo é: %.2f\n", a * b);
            break;
        default:
            printf("Opção inválida.\n");
    }

    
    }