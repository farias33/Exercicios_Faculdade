#include <stdio.h>
#include <math.h>

int main() {
 
    float A, B, x;
    scanf("%f%f", &A, &B);
    x = (3.5 * A + 7.5 * B)/(3.5 + 7.5);
    printf("MEDIA = %.5f\n", x);

    return 0;
    
}
