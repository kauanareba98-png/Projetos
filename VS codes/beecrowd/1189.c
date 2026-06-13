#include <stdio.h>

int main() {
    double m[12][12];
    int i, j, qtd = 0;
    char o;
    double soma = 0;

    scanf(" %c", &o);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            if (i > j && i + j < 11) {
                soma += m[i][j];
                qtd++;
            }
        }
    }

    if (o == 'S') {
        printf("%.1f\n", soma);
    } else {
        printf("%.1f\n", soma / qtd);
    }

    return 0;
}
