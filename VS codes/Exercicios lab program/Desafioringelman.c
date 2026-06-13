#include <stdio.h>
#include <math.h>
int main()
{
    int cont;
    double f0,f1,f2;
    f0 = 0.0;
    f1 = 1.0;
printf("%.0lf\n",f0);
printf("%.0lf\n",f1);
    for(cont=0;cont<31;cont++)
    {
        f2 = f0;    
        f0 = f1;      
        f1 = f1 + f2; 
        printf("%.0lf\n", f0);
    }

    return 0;
}