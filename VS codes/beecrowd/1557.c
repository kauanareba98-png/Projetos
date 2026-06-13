#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        int m[15][15];
        int i, j, k, maior, t, temp;

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                m[i][j] = 1;
                for (k = 0; k < i + j; k++) {
                    m[i][j] *= 2;
                }
            }
        }

        maior = m[n - 1][n - 1];
        t = 0;
        temp = maior;
        do {
            t++;
            temp /= 10;
        } while (temp > 0);

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (j > 0) {
                    printf(" ");
                }
                printf("%*d", t, m[i][j]);
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
