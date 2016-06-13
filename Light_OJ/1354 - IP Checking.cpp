#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)

{
    char c1,c2,c3,c4,c5,c6;

    long long int d1,d2,d3,d4,b1,b2,b3,b4,j1,j2,j3,j4,k,l,x,r1,r2,r3,r4,a1,a2,a3,a4;

    int n,i;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        j1=1,j2=1,j3=1,j4=1,a1=0,a2=0,a3=0,a4=0;

        scanf("%lld %c %lld %c %lld %c %lld %lld %c %lld %c %lld %c %lld",&d1,&c1,&d2,&c2,&d3,&c3,&d4,&b1,&c4,&b2,&c5,&b3,&c6,&b4);

        while(b1!=0)
        {
            r1 = b1%10;
            a1 = a1+r1*j1;
            j1 = j1*2;
            b1 = b1/10;
        }
        while(b2!=0)
        {
            r2 = b2%10;
            a2 = a2+r2*j2;
            j2 = j2*2;
            b2 = b2/10;
        }
        while(b3!=0)
        {
            r3 = b3%10;
            a3 = a3+r3*j3;
            j3 = j3*2;
            b3 = b3/10;
        }
        while(b4!=0)
        {
            r4 = b4%10;
            a4 = a4+r4*j4;
            j4 = j4*2;
            b4 = b4/10;
        }
        if(a1 == d1 && a2 == d2 && a3 == d3 && a4 == d4)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }
    }
    return 0;
}
