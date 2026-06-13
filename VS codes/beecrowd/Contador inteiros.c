#include <stdio.h>
int main()
{
    int cont=0,posi;
    float num,media=0;
    for(posi=0;cont<6;cont++)
    {
        scanf("%f",&num);
        if(num>0)
        {
            media+=num;
            posi++;
        }
    }
    media = media/posi;
    printf("%d valores positivos\n",posi);
    printf("%.1f\n",media);


    return 0;
}