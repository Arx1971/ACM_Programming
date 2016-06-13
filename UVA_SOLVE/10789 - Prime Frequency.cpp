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
    int siv[1000],b[1000],c[1000],n,x=0,hand;

    char a[1000],dump[10];

    scanf("%d",&n);

    gets(dump);

    while(n--)
    {
        gets(a);

        for(int i=0; i<=1000; i++)
        {
            b[i] = 0;
        }

        for(int i=0; a[i]!='\0'; i++)
        {
            if(isalpha(a[i]) || (a[i]>='0' && a[i]<='9'))
            {
                b[a[i]]++;
            }
        }/**
        for(int i=0;i<=100;i++)
        {
            printf("%d\n",b[i]);
        }**/
        for(int i=0; i<=1000; i++)
        {
            siv[i] = 1;
        }
        for(int i=2; i<=1000; i++)
        {
            for(int j=2*i; j<=1000; j+=i)
            {
                siv[j] = 0;
            }
        }
        int count = 0;

        printf("Case %d: ",++x);

        for(int i=0; i<=1000; i++)
        {
            if(b[i]>0)
            {
                if(siv[b[i]]==1 && b[i]!=1)
                {
                    printf("%c",i);
                    count = 1;
                }
            }
        }
        if(count==0)
        {
            printf("empty");
        }
        printf("\n");
    }
    return 0;
}
