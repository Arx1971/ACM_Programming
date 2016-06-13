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

#define N 999999

int siv[10000000];

const double  pi = 2 * acos (0.0);

using namespace std;

int main(void)
{
    int n;

    for(int i=0; i<=N; i++)
    {
        siv[i] = 1;
    }
    for(int i=2; i<=N; i++)
    {
        for(int j=2*i; j<=N; j+=i)
        {
            siv[j] = 0;
        }
    }
    char a[1000];

    while(scanf("%s",a)==1)
    {
        int hand = 0;

        if(strlen(a)==1 && a[0]=='0')
        {
            printf("%s is not prime.\n",a);
        }
        else
        {
            for(int i=0; a[i]!='\0'; i++)
            {
                hand = hand*10+(a[i]-'0');
            }
            if(siv[hand]==1)
            {
                int temp = 0;

                for(int i=strlen(a)-1; i>=0; i--)
                {
                    temp = temp*10+(a[i]-'0');
                }
                if(siv[temp]==1 && hand!=temp)
                {
                    printf("%s is emirp.\n",a);
                }
                else
                {
                    printf("%s is prime.\n",a);
                }
            }
            else
            {
                printf("%s is not prime.\n",a);
            }
        }
    }
    return 0;
}
