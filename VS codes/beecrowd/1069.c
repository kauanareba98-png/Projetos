#include <stdio.h>
#include <string.h>

int main() {
    int n, t, i, len, topo, count;
    char s[1001], pilha[1001], c;

    scanf("%d", &n);

    for (t = 0; t < n; t++) {
        scanf("%s", s);

        topo = -1;
        count = 0;
        len = strlen(s);

        for (i = 0; i < len; i++) {
            c = s[i];

            if (c == '>') {
                while (topo >= 0 && pilha[topo] == '.') {
                    topo--;
                }

                if (topo >= 0 && pilha[topo] == '<') {
                    topo--;
                    count++;
                } else {
                    topo++;
                    pilha[topo] = '>';
                }
            } else {
                topo++;
                pilha[topo] = c;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
