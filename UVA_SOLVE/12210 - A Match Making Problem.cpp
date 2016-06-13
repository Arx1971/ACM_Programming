#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>

int main(void)

{
    int n,x,c,a,b[10000],s[10000],k = 1;

    while(scanf("%d %d",&n,&x)==2)
    {
        int hand = 9999999,p = 0;

        if(n==0 && x==0)
        {
            break;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                scanf("%d",&b[i]);
            }

            for(int i=0; i<x; i++)
            {
                scanf("%d",&s[i]);
            }
            if(x==n)
            {
                printf("Case %d: %d\n",k,x-n);
            }
            else if(n<x)
            {
                printf("Case %d: %d\n",k,p);
            }
            else if(n>x)
            {
                for(int j=0; j<n; j++)
                {
                    if(b[j]<hand)

                        hand = b[j];
                }
                printf("Case %d: %d %d\n",k,n-x,hand);
            }
        }

        k++;
    }
    return 0;
}
