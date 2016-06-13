#include <stdio.h>

int main(void)

{
    int a,b,n,i,j=0,m=0,k=0;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);

        m = ((((a*567)/9)+7492)*235)/47;

        if(m>0)
        {
            j = m - 498;
        }

        else if(m<0)
        {
            j = 498 - m;
        }

        k = (j/10)%10;

        printf("%d\n",k);
    }
    return 0;
}
