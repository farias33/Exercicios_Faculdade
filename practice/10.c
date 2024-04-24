#include <stdio.h>

int main(){
    int numero;
    for(int i = 100; i <= 1000;i++){
        if(numero % 7 == 0){
            printf("%d eh multiplo de 7", i);
        }
    }

    return 0;
}