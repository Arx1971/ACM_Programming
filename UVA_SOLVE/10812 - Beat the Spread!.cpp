#include <stdio.h>

int main(void)

{
    long long int a,b,c=0,n,x=0,m,i,d=0;

    scanf("%lld",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%lld %lld",&a,&b);


        if(a>=b)
        {
            x = (a+b)/2;
            d = a-x;
            c = x - d;

            if(b == c)
            {

                printf("%lld %lld\n",x,d);
            }

            else
            {
                printf("impossible\n");
            }
        }

        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
