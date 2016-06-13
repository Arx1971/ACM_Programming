#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstddef>
#include <ctype.h>
#include <cfloat>
#include <climits>
#include <iomanip>

#define N 1000

const double  pi = 2 * acos (0.0);

using namespace std;

int main(void)
{
    int a[100],n,x,p,q,j=0;

    scanf("%d",&x);

    while(x--)
    {
        int count = 0,sum = 0;

        scanf("%d %d %d",&n,&p,&q);

        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0,l=1; i<n; i++,l++)
        {
            sum+=a[i];

            if(sum<=q && l<=p)
            {
                count++;
            }
        }
        printf("Case %d: %d\n",++j,count);
    }
    return 0;
}
