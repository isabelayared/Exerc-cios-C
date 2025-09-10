#include <stdio.h>
#include <stdlib.h>

long long int fatorial(int num) {
    if (num < 0) {
        return -1;
    }

    long long int resultado = 1;
    for (int i = 1; i <= num; ++i) {
        resultado *= i;
    }
    return resultado;
}


void calcularFatoriais() {
    int N;

    printf("Digite a quantidade de valores a serem lidos: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, insira um número positivo.\n");
        return;
    }

    int *valores = (int *)malloc(N * sizeof(int));
    if (valores == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }

    printf("Digite %d valores inteiros e positivos:\n", N);
    for (int i = 0; i < N; ++i) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (valores[i] < 0) {
            printf("Valor inválido. Por favor, digite um número positivo.\n");
            free(valores);
            return;
        }
    }

    printf("\n+--------------------+\n");
    printf("| Valor |  Fatorial  |\n");
    printf("+--------------------+\n");

    for (int i = 0; i < N; ++i) {
        long long int fat = fatorial(valores[i]);
        if (fat == -1) {
            printf("| %-5d | %-10s |\n", valores[i], "Indefinido");
        } else {
            printf("| %-5d | %-10lld |\n", valores[i], fat);
        }
    }
    printf("+--------------------+\n");

    free(valores);
}

int main() {
    calcularFatoriais();
    return 0;
}
