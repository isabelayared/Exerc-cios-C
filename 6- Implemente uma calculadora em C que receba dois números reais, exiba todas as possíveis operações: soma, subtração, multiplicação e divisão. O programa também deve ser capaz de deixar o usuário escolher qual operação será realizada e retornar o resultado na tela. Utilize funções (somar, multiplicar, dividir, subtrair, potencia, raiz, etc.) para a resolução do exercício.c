#include <stdio.h>

int main() {
    float A, B;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &A);

    printf("Digite o segundo número: ");
    scanf("%f", &B);

    printf("Digite a operação desejada (+, -, /, *): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            printf("A soma é %.2f\n", A + B);
            break;
        case '-':
            printf("A subtração é %.2f\n", A - B);
            break;
        case '/':
            if (B != 0) {
                printf("A divisão é %.2f\n", A / B);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        case '*':
            printf("A multiplicação é %.2f\n", A * B);
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }

    return 0;
}
