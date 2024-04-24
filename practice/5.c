#include <stdio.h>

int main() {
   float quilometragem_atual, quilometragem_anterior, qtd_litros, taxa_consumo;
   printf("informe a quilometragem atual: \n");
   scanf("%f", &quilometragem_atual);
   printf("informe a quilometragem anterior: \n");
   scanf("%f", &quilometragem_anterior);
   printf("informe a quantidade de litros consumida: \n");
   scanf("%f", &qtd_litros);

    taxa_consumo = (quilometragem_atual- quilometragem_anterior) / qtd_litros;


   printf("Taxa de consumo do veiculo: %.2f \n", taxa_consumo);

   return 0;
}
