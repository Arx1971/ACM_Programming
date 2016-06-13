#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstddef>
#include <ctype.h>
#include <cfloat>
#include <climits>

#define N 1000

const double  pi = 2 * acos (0.0);

using namespace std;

int main(void)

{
    int n,c[1000],d[1000],x,temp,flag,sum[1000],m[1000],j;

    char a[1000],b[1000],hand,dump[5];

    scanf("%d",&n);

    gets(dump);

    while(n--)
    {
        scanf("%s %s",a,b);

        for(int i=0,j=strlen(a)-1; i<j; i++,j--)
        {
            hand = a[i];
            a[i] = a[j];
            a[j] = hand;
        }
        for(int i=0,j=strlen(b)-1; i<j; i++,j--)
        {
            hand = b[i];
            b[i] = b[j];
            b[j] = hand;
        }
        if(strlen(a)==strlen(b))
        {
            for(int i=0; i<strlen(a); i++)
            {
                c[i] = a[i] - '0';
                d[i] = b[i] - '0';
            }
        }
        else if(strlen(a)>strlen(b))
        {
            int k = strlen(a)-strlen(b);

            for(int i=strlen(a)-1,j=strlen(b)-1; i>=0; i--,j--)
            {
                b[i] = b[j];
            }
            for(int i=0; i<k; i++)
            {
                b[i] = '0';
            }

            b[strlen(a)] = '\0';

            for(int i=0; i<strlen(b); i++)
            {
                d[i] = b[i] - '0';
            }
            for(int i=0; i<strlen(a); i++)
            {
                c[i] = a[i] - '0';
            }
        }
        else if(strlen(a)<strlen(b))
        {
            int k = strlen(b)-strlen(a);

            for(int i=strlen(b)-1,j=strlen(a)-1; i>=0; i--,j--)
            {
                a[i] = a[j];
            }
            for(int i=0; i<k; i++)
            {
                a[i] = '0';
            }

            a[strlen(b)] = '\0';

            for(int i=0; i<strlen(a); i++)
            {
                c[i] = a[i] - '0';
            }
            for(int i=0; i<strlen(b); i++)
            {
                d[i] = b[i] - '0';
            }
        }

        for(int i=strlen(a)-1,l=0; i>=0; i--,l++)
        {
            sum[l] = c[i] + d[i];

            if(sum[l]>=10 && i!=0)
            {
                temp = sum[l]%10;
                flag = sum[l]/10;
                sum[l] = temp;
                c[i-1] = c[i-1]+flag;
            }
        }
        int count=0;

        for(int i=0,j=0; i<strlen(a); i++,j++)
        {
            if(sum[i]>=10)
            {
                while(sum[i])
                {
                    m[j] = sum[i]%10;
                    sum[i] = sum[i]/10;
                    j++;
                    count++;
                }
            }
            else if(sum[i]<=9)
            {
                m[j] = sum[i];
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            if(m[i]==0)
            {
                continue;
            }
            else if(m[i]>=1 && m[i]<=9)
            {
                x = i;
                break;
            }
        }
        for(int i=x;i<count;i++)
        {
            printf("%d",m[i]);
        }
        printf("\n");
    }
    return 0;
}
