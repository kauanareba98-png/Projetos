#include <stdio.h>
#include <math.h>
int main()
{
    int n,count;
    double elev;
    scanf("%d",&n);
    for(count=2;count<=n;count+=2)
    {
        if (n>5 && n<2000)
        {
        elev = pow(count,2);
        printf("%d^2 = %.0lf\n",count,elev);
    }
}

return 0;
}