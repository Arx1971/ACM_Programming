#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void)

{
    int n,i,j,k,l,a,b,c,count,hand,e,f,g,h;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        e = a + b , hand = 0 ;

        for(j=1;j<=100000;j++)
        {
            f = e%c;
            g = e/c;
            hand = hand + g;
            e = g + f;
        }
        printf("%d\n",hand);
    }
    return 0;
}
