#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <list>
#include <cstddef>
#include <cstdlib>
#include <cctype>
#include <iostream>
using namespace std;

#define INF_MAX 	2147483647
#define INF_MIN 	-2147483648
#define pb push_back
#define all(x) x.begin(),x.end()
#define distSqr(x1,y1,x2,y2) (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)
#define dist(x1,y1,x2,y2) sqrt(distSqr(x1,y1,x2,y2))
#define Set(x,v) memset(x,v,sizeof x)
#define For(i,s,e) for(i=s;i<=e;i++)
#define lb lower_bound
#define ub upper_bound
#define gcd(a,b) __gcd(a,b)
#define pi acos(-1)
#define mp make_pair
#define pos first
#define val second
#define error 1e-12
#define mod 1000000007
#define nl printf("\n")

typedef long long ll;

int main(void)

{
    long long int n,i,w=0,z=0,j,k,a,b,c,l,hand,x;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a<=b)
        {
            hand = 0;

            for(j=a; j<=b; j++)
            {
                n = j;
                for(i=0; i>=0; i++)
                {
                    if(n%2==0)
                    {
                        n=n/2;
                        if(n==1)
                        {
                            break;
                        }
                    }
                    else if(n%2!=0)
                    {
                        n = n*3+1;
                        if(n==1)
                        {
                            break;
                        }
                    }
                }
                i = i + 2;
                if(j==1) i=1;


                if(i>hand)
                {
                    hand = i;
                }
            }
            printf("%lld %lld %lld\n",a,b,hand);

        }

        else if(a>b)
        {
            hand = 0;

            for(j=a; j>=b; j--)
            {
                n = j;
                for(i=0; i>=0; i++)
                {
                    if(n%2==0)
                    {
                        n=n/2;
                        if(n==1)
                        {
                            break;
                        }
                    }
                    else if(n%2!=0)
                    {
                        n = n*3+1;
                        if(n==1)
                        {
                            break;
                        }
                    }
                }
                i = i + 2;
                if(j==1) i=1;


                if(i>hand)
                {
                    hand = i;
                }
            }
            printf("%lld %lld %lld\n",a,b,hand);

        }
    }

    return 0;

}
