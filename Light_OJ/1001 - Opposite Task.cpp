#include <stdio.h>

int main(void)

{
    int a,b=0,c,n,i,j;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        b=0;
        scanf("%d",&a);

        if(a>10)
        {
            b = a - 10;

            printf("%d %d\n",b,10);
        }


        else
        {
            printf("%d %d\n",b,a);
        }
    }
    return 0;
}
