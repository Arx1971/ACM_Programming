#include <stdio.h>

int main(void)

{
    int a,b,n,x,i;

    while(scanf("%d",&n)==1)
    {
        x = 0;
        if(n==0)
        {
            break;
        }
        for(i=1; i<=n; i++)
        {
            x = x + i*i;
        }
        printf("%d\n",x);
    }
    return 0;
}
