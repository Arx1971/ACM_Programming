#include <stdio.h>

int main(void)

{
    int a,b,c,x,n,i,d,j,high,low;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);

        high = 0,low = 200;

        for(j=1; j<=x; j++)
        {
            scanf("%d",&a);

            if(a>high)
                high = a;

            if(a<low)
                low = a;

            c = high - low;
            d = c*2;
        }
        printf("%d\n",d);
    }
    return 0;
}
