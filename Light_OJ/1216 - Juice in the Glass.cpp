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
    int n,x,j = 0;

    double r1,r2,h,p,r,ans;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);

        r = r2+(r1-r2)*(p/h);

        ans = ((pi*p)/3) * (r*r+(r*r2)+r2*r2);

        printf("Case %d: %0.7lf\n",++j,ans);
    }
    return 0;
}
