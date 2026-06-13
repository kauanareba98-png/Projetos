#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        char seq[4];
        scanf("%s", seq);
        
        int d1 = seq[0] - '0';
        char letra = seq[1];
        int d2 = seq[2] - '0';
        
        if (d1 == d2) {
            printf("%d\n", d1 * d2);
        } else if (isupper(letra)) {
            printf("%d\n", d2 - d1);
        } else {
            printf("%d\n", d1 + d2);
        }
    }
    
    return 0;
}