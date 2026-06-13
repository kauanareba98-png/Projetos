#include <stdio.h>
int main()
{
    int n,x,in=0,out=0,cont;
    scanf("%d",&n);
    for(cont=0;cont<n;cont++)
    {
        scanf("%d",&x);
        if(x>=10 && x<=20)
        {
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}