#include <stdio.h>

int main() {
    int n, t, i, j, topo, p1, p2;
    char expr[302], pilha[302], saida[302], c, op;

    scanf("%d", &n);
    getchar();

    for (t = 0; t < n; t++) {
        fgets(expr, sizeof(expr), stdin);

        topo = -1;
        j = 0;

        for (i = 0; expr[i] != '\0'; i++) {
            c = expr[i];

            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                saida[j] = c;
                j++;
            } else if (c == '(') {
                topo++;
                pilha[topo] = c;
            } else if (c == ')') {
                while (topo >= 0 && pilha[topo] != '(') {
                    saida[j] = pilha[topo];
                    j++;
                    topo--;
                }
                topo--;
            } else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
                if (c == '^') {
                    p1 = 3;
                } else if (c == '*' || c == '/') {
                    p1 = 2;
                } else {
                    p1 = 1;
                }

                while (topo >= 0 && pilha[topo] != '(') {
                    op = pilha[topo];

                    if (op == '^') {
                        p2 = 3;
                    } else if (op == '*' || op == '/') {
                        p2 = 2;
                    } else {
                        p2 = 1;
                    }

                    if (p2 > p1 || (p2 == p1 && c != '^')) {
                        saida[j] = op;
                        j++;
                        topo--;
                    } else {
                        break;
                    }
                }

                topo++;
                pilha[topo] = c;
            }
        }

        while (topo >= 0) {
            saida[j] = pilha[topo];
            j++;
            topo--;
        }

        saida[j] = '\0';
        printf("%s\n", saida);
    }

    return 0;
}
