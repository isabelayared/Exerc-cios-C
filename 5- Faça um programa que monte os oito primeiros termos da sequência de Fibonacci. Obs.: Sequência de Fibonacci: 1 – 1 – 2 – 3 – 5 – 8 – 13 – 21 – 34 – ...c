#include <stdio.h>
#include <stdlib.h>
int main() {
    int termo1 = 1, termo2 = 1, proximoTermo;
    int i;

    printf("Os oito primeiros termos da sequência de Fibonacci são:\n");
    printf("%d, ", termo1);
    printf("%d, ", termo2);

    for (i = 3; i<=9; i++){
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
        printf("%d, ", proximoTermo);
    }
return 0;
    
}    
