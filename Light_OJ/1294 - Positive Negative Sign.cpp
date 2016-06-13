#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include <math.h>
#include <float.h>
#include <limits.h>

int main()

{
    long long int n,i,j,a,b,ans,k=1;

    scanf("%lld",&n);

    while(n--)
    {
        scanf("%lld %lld",&a,&b);

        ans = (a*b)/2;

        printf("Case %lld: %lld\n",k,ans);
        k++;
    }
    return 0;
}
