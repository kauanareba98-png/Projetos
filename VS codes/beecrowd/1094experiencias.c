#include <stdio.h>
#include <string.h>
int main()
{
    int qnt,total=0,totc=0,totr=0,tots=0,limit=0,cont;
    float percc,percr,percs;
    char tipo[2];
    scanf("%d",&limit);
    for(cont=0;cont<limit;cont++)
    {
        scanf("%d %s",&qnt, tipo);
        if (_stricmp(tipo,"c")==0)
        {
            totc+=qnt;
        }else{
            if (_stricmp(tipo,"r")==0)
        {
            totr+=qnt;
        }else{
            tots+=qnt;
        }
        }
        total+=qnt;
    }
    percc = (totc*100.0)/total;
    percr = (totr*100.0)/total;
    percs = (tots*100.0)/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",totc);
    printf("Total de ratos: %d\n",totr);
    printf("Total de sapos: %d\n",tots);
    printf("Percentual de coelhos: %.2f %%\n",percc);
    printf("Percentual de ratos: %.2f %%\n",percr);
    printf("Percentual de sapos: %.2f %%\n",percs);

    return 0;
}