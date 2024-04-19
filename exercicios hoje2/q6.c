#include <stdio.h>

int main() {
    char sexo, corOlhos, corCabelos;
    int idade, contHomens = 0, somaIdadeHomens = 0, contMulheres = 0, contMulheresCrit = 0;
    float mediaIdadeHomens, percMulheres, percMulheresCrit;

    // Ler os dados dos habitantes
    for (int i = 1; i <= 10; i++) {
        printf("Dados do habitante %d:\n", i);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); // Note o espaço antes de %c para consumir o newline anterior
        printf("Cor dos olhos (A - azuis, V - verdes, C - castanhos): ");
        scanf(" %c", &corOlhos);
        printf("Cor dos cabelos (L - loiros, C - castanhos, P - pretos): ");
        scanf(" %c", &corCabelos);
        printf("Idade: ");
        scanf("%d", &idade);

        // Processamento de dados
        if (sexo == 'M' || sexo == 'm') {
            contHomens++;
            somaIdadeHomens += idade;
        }
        if (sexo == 'F' || sexo == 'f') {
            contMulheres++;
            if (idade >= 1 && idade <= 35 && corOlhos == 'V' && corCabelos == 'L') {
                contMulheresCrit++;
            }
        }
    }

    // Cálculos
    mediaIdadeHomens = (contHomens != 0) ? (float)somaIdadeHomens / contHomens : 0;
    percMulheres = (contMulheres / 10.0f) * 100;
    percMulheresCrit = (contMulheres != 0) ? (float)contMulheresCrit / contMulheres * 100 : 0;

    // Resultados
    printf("A idade media dos homens e: %.2f anos\n", mediaIdadeHomens);
    printf("A porcentagem de habitantes do sexo feminino e: %.2f%%\n", percMulheres);
    printf("A porcentagem de mulheres com idade entre 1 e 35 anos, olhos verdes e cabelos louros e: %.2f%%\n", percMulheresCrit);

    return 0;
}
