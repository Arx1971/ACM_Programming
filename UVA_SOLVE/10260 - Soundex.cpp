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
    char a[25];

    int n,x,sum[25],count=0,l,i;

    while(scanf("%s",a)!=EOF)
    {
        count = 0;

        for( i=0,l=0; i<strlen(a); i++)
        {
            if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='H' || a[i]=='W' || a[i]=='Y')
            {
                continue;
            }
            else if(a[i]=='B' || a[i]=='F' || a[i]=='P' || a[i]=='V')
            {
                if(a[i+1]=='B' || a[i+1]=='F' || a[i+1]=='P' || a[i+1]=='V')
                {
                    continue;
                    //l--;
                }
                else
                {
                    sum[l] = 1;
                    l++;
                }
            }
            else if(a[i]=='C' || a[i]=='G' || a[i]=='J' || a[i]=='K' || a[i]=='Q' || a[i]=='S' || a[i]=='X' || a[i]=='Z')
            {
                if(a[i+1]=='C' || a[i+1]=='G' || a[i+1]=='J' || a[i+1]=='K' || a[i+1]=='Q' || a[i+1]=='S' || a[i+1]=='X' || a[i+1]=='Z')
                {
                    continue;
                    //l--;
                }
                else
                {
                    sum[l] = 2;
                    l++;
                }
            }
            else if(a[i]=='D' || a[i]=='T')
            {
                if(a[i+1]=='D' || a[i+1]=='T')
                {
                    continue;
                    //l--;
                }
                else
                {
                    sum[l] = 3;
                    l++;
                }
            }
            else if(a[i]=='L')
            {
                if(a[i+1]=='L')
                {
                    continue;
                    //l--;
                }
                else
                {
                    sum[l] = 4;
                    l++;
                }
            }
            else if(a[i]=='M' || a[i]=='N')
            {
                if(a[i+1]=='M' || a[i+1]=='N')
                {
                    continue;
                    //l--;
                }
                else
                {
                    sum[l] = 5;
                    l++;
                }
            }
            else if(a[i]=='R')
            {
                if(a[i+1]=='R')
                {
                    continue;
                    //l--;
                }
                else
                {
                    sum[l] = 6;
                    l++;
                }
            }
        }
        for( i=0; i<l; i++)
        {
            printf("%d",sum[i]);
        }
        printf("\n");
    }
    return 0;
}
