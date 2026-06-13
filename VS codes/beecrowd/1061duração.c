#include <stdio.h>
#include <string.h>
int main()
{
    char dia[5];
    int d, h, m, s, d2, h2, m2, s2, hora, min, seg, dias;
    scanf("%s %d", dia, &d);
    scanf("%d : %d : %d", &h, &m, &s);
    scanf("%s %d", dia, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    dias = (d2 - d);
    hora = (h2 - h);
    min = (m2 - m);
    seg = (s2 - s);
    if (seg < 0)
    {
        seg += 60;
        min--;
    }
    if (min < 0)
    {
        min += 60;
        hora--;
    }
    if (hora < 0)
    {
        hora += 24;
        dias--;
    }
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", seg);
    return 0;
}