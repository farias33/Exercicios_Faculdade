#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados dos habitantes
    char sexo, cor_olhos, cor_cabelos;
    int idade;
    // Variáveis para cálculos
    int total_homens = 0, total_mulheres = 0, mulheres_verdes_louros = 0, total_habitantes = 10;
    float soma_idade_homens = 0;

    // Loop para coletar os dados de 10 habitantes
    for (int i = 1; i <= total_habitantes; i++) {
        printf("Digite os dados do habitante %d:\n", i);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Cor dos olhos (A/V/C): ");
        scanf(" %c", &cor_olhos);
        printf("Cor dos cabelos (L/C/P): ");
        scanf(" %c", &cor_cabelos);
        printf("Idade: ");
        scanf("%d", &idade);

        // Calcula a idade média dos homens
        if (sexo == 'M') {
            soma_idade_homens += idade;
            total_homens++;
        }

        // Conta o número de mulheres
        if (sexo == 'F') {
            total_mulheres++;

            // Verifica se a mulher é verde e loira e tem idade entre 1 e 35 anos
            if (cor_olhos == 'V' && cor_cabelos == 'L' && idade >= 1 && idade <= 35) {
                mulheres_verdes_louros++;
            }
        }
    }

    // Calcula a idade média dos homens
    float media_idade_homens = total_homens > 0 ? soma_idade_homens / total_homens : 0;

    // Calcula a porcentagem de habitantes do sexo feminino
    float porcentagem_mulheres = (total_mulheres * 100.0) / total_habitantes;

    // Calcula a porcentagem de mulheres verdes, loiras e com idade entre 1 e 35 anos
    float porcentagem_mulheres_verdes_louros = (mulheres_verdes_louros * 100.0) / total_mulheres;

    // Exibe os resultados
    printf("\nResultados:\n");
    printf("a) Idade média dos homens: %.2f anos\n", media_idade_homens);
    printf("b) Porcentagem de habitantes do sexo feminino: %.2f%%\n", porcentagem_mulheres);
    printf("c) Porcentagem de mulheres verdes, loiras e com idade entre 1 e 35 anos: %.2f%%\n", porcentagem_mulheres_verdes_louros);

    return 0;
}
