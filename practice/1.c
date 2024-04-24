#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite o valor dos triangulo");
    scanf("%d%d%d",&a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Forma triangulo\n");
        if(a == b && b == c){
            printf("Triangulo equilatero");
        }else if(a == b || b == c || a == c){
            printf("Triangulo isosceles");
        }else{
            printf("Triangulo escaleno");
        }
    }else{
        printf("Nao forma triangulo");

        return 0;
    }





























}
