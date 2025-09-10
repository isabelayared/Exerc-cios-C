#include <stdio.h>

struct Data {
    int dia, mes, ano;
};

int main() {
    struct Data d1, d2;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    if (d1.ano > d2.ano ||
       (d1.ano == d2.ano && d1.mes > d2.mes) ||
       (d1.ano == d2.ano && d1.mes == d2.mes && d1.dia > d2.dia)) {
        printf("A primeira data é mais recente: %02d/%02d/%04d\n", d1.dia, d1.mes, d1.ano);
    } else if (d1.ano == d2.ano && d1.mes == d2.mes && d1.dia == d2.dia) {
        printf("As duas datas sao iguais.\n");
    } else {
        printf("A segunda data é mais recente: %02d/%02d/%04d\n", d2.dia, d2.mes, d2.ano);
    }

    return 0;
}
