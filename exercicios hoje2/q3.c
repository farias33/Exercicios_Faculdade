#include <stdio.h>

int main() {
    float a, b, c, area;
    char opcao;
    const float PI = 3.14159265358979323846;

    // Ler os valores reais
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Apresentar o menu de opções
    printf("\nEscolha uma das opcoes para calcular a area:\n");
    printf("a) Triangulo com base 'a' e altura 'b'.\n");
    printf("b) Circulo com raio 'c'.\n");
    printf("c) Trapezio com bases 'a' e 'b' e altura 'c'.\n");
    printf("d) Quadrado com lado 'b'.\n");
    printf("e) Retangulo com lados 'a' e 'b'.\n");
    printf("Digite a letra correspondente a opcao desejada: ");
    scanf(" %c", &opcao); // Note o espaço antes de %c para ignorar whitespace

    // Processar a escolha do usuário
    switch (opcao) {
        case 'a':
            // Área do triângulo
            area = (a * b) / 2;
            printf("Area do triangulo: %.2f\n", area);
            break;
        case 'b':
            // Área do círculo
            area = PI * c * c;
            printf("Area do circulo: %.2f\n", area);
            break;
        case 'c':
            // Área do trapézio
            area = (a + b) * c / 2;
            printf("Area do trapezio: %.2f\n", area);
            break;
        case 'd':
            // Área do quadrado
            area = b * b;
            printf("Area do quadrado: %.2f\n", area);
            break;
        case 'e':
            // Área do retângulo
            area = a * b;
            printf("Area do retangulo: %.2f\n", area);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
