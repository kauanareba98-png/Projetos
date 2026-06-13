#include <stdio.h>
 
int main() {
 
    int T,N[1000],cont=0;
    scanf("%d",&T);
    for (int i = 0; i<1000;i++)
    {
        if(cont==T)
        {
            (cont =0);
        }
        N[i]=cont;
        cont++;
    }
    for (int i = 0; i<1000;i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}