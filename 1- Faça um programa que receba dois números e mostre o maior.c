#include <stdio.h>
int main(){
    float A, B;
    printf("Digite o primeiro número: ");
    scanf("%f", &A);
    printf("Digite o segundo número: ");
    scanf("%f", &B);
    if (A>B) {
        printf("O maior número é %.2f", A);
    } else {
        printf("O maior número é %.2f", B);
    }
}
