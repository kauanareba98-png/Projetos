#include <stdio.h>
int main()
{
    int qnt,cont;
    float media,a,b,c;
    scanf("%d",&qnt);
    for(cont=0;cont<qnt;cont++)
    {
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        media = (a*2+b*3+c*5)/10;
        printf("%.1f\n",media);
    }
    return 0;
}