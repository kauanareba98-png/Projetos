#include <stdio.h>

int main() {
    int n, i, j, valor;

    while (scanf("%d", &n) == 1) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i + j == n - 1) {
                    valor = 2;
                } else if (i == j) {
                    valor = 1;
                } else {
                    valor = 3;
                }
                printf("%d", valor);
            }
            printf("\n");
        }
    }

    return 0;
}
