#include <stdio.h>

int main(void)

{
    int a[50],n,c,i;

    a[1]=1;
    a[2]=2;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }

        for(i=3; i<=n; i++)
        {
            a[i]= a[i-1]+a[i-2];
        }
        printf("%d\n",a[n]);
    }
    return 0;
}
