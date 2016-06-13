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

struct stu
{
    char a[105];
    int l;
    int w;
    int d;
}s[100];

int main(void)
{
    stu hand;
    int sum[100],x,c,n,k=0,temp;

    scanf("%d",&x);

    while(x--)
    {
        scanf("%d",&n);

        for(int i = 0; i<n; i++)
        {
            scanf("%s %d %d %d",s[i].a,&s[i].l,&s[i].w,&s[i].d);

            sum[i] = (s[i].l)*(s[i].w)*(s[i].d);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(sum[j]>sum[j+1])
                {
                    hand = s[j];
                    s[j] = s[j+1];
                    s[j+1] = hand;

                    temp = sum[j];
                    sum[j] = sum[j+1];
                    sum[j+1] = temp;
                }
            }
        }
        if(sum[0]==sum[n-1])
        {
            printf("Case %d: no thief\n",++k);
        }
        else
        {
            printf("Case %d: %s took chocolate from %s\n",++k,s[n-1].a,s[0].a);
        }
    }
    return 0;
}
