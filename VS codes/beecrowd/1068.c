#include <stdio.h>

int main() {
    int j, balance, correto;
    char linha[1002];

    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        balance = 0;
        correto = 1;

        for (j = 0; linha[j] != '\0'; j++) {
            if (linha[j] == '(') {
                balance++;
            } else if (linha[j] == ')') {
                balance--;
            }

            if (balance < 0) {
                correto = 0;
            }
        }

        if (balance != 0) {
            correto = 0;
        }

        if (correto) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
    }

    return 0;
}
