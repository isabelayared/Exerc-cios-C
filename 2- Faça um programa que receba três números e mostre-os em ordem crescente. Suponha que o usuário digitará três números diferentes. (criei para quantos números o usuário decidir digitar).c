#include <stdio.h>
int main() {
    int n, i, j, temp;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &n);

    int numeros[n];

    for (i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("\nNumeros em ordem crescente: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
