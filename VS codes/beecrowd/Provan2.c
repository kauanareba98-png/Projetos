#include <stdio.h>
 
int main() {
     int n;
     int p,q,r,s,x,y,i,j,k;
     long long c=0;
     
     scanf("%d",&n);
     scanf("%d%d%d%d%d",&p,&q,&r,&s,&x,&y);
     scanf("%d%d",&i,&j);
     for(k=1;k<=n;k++){
         long long a=(p*i+q*k);
         long long b =(r*k+s*j);
         c+=a*b;
     }
     printf ("%lld\n",c);
    return 0;
}