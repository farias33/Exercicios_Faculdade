#include <stdio.h>
#include <math.h>
//Toda a vez que for pedido um MENU DE OPCOES, eh mais facil usar switch - case
int main() {
    float tarifa, tempo, m, total;

    printf("Digite o tempo de chamada em minutos: ");
    scanf("%d", &m);

    if(tempo > 3){
        tarifa = (m * 0.26);
    }

    total = 0.75 + tarifa;

    printf("O valor total a ser pago pela chamada eh: %d",total);
    return 0;
    }