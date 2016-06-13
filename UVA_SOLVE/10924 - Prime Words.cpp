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
    char a[10000];

    int b[10000],c[10000];

    while(scanf("%s",a)!=EOF)
    {
        int sum = 0;

        for(int i=0; i<strlen(a); i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                b[i] = a[i] - 'a' + 1;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                b[i] = a[i] - 'A' + 27;
            }
            sum+=b[i];
        }
        for(int i = 0; i<=sum; i++)
        {
            c[i] = 1;
        }
        for(int i=2; i<=sum; i++)
        {
            for(int j=2*i; j<=sum; j+=i)
            {
                c[j] = 0;
            }
        }
        if(c[sum]==1)
        {
            cout << "It is a prime word." << endl;
        }
        else
        {
            cout << "It is not a prime word." << endl;
        }
    }
    return 0;
}
