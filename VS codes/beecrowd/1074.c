#include <stdio.h>
int main()
{
 int qnt,n,cont;
 char impar[4] = "ODD";
 char par[5] = "EVEN";
 char posi[9] = "POSITIVE";
 char nega[9] = "NEGATIVE";
 char zero[5] = "NULL";
scanf("%d",&qnt);
    for(cont=0;cont<qnt;cont++)
    {   
        scanf("%d",&n);
        if (n == 0)
        {
            printf("%s\n",zero);
        }else{
            if ((n%2)==0)
            {
                if(n>0)
                {
                    printf("%s %s\n",par,posi);
                }else{
                    printf("%s %s\n",par,nega);
                }
            }else{
                if(n>0)
                {
                    printf("%s %s\n",impar,posi);
                }else{
                    printf("%s %s\n",impar,nega);
                }
            }
        }

    }
return 0;
}