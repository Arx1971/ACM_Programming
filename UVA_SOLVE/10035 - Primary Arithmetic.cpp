#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)

{
    char a[10000],b[10000];

    int n,i,j,k,l,count,sum = 0,hand[100000],d[10000],c[10000];

    while(scanf("%s %s",a,b)==2)
    {
        if(a[0]=='0' && b[0]=='0')
        {
            break;
        }

        for(i=0; a[i]!='\0'; i++)
        {
            d[i] = (a[i]-'0');
        }
        for(i=0; b[i]!='\0'; i++)
        {
            c[i] = (b[i]-'0');
        }

        int f;

        count = 0;

        if(strlen(a)==strlen(b))
        {
            for(i=strlen(a)-1,j=strlen(b)-1; i>=0,j>=0; i--,j--)
            {
                sum = d[j] + c[i];
                if(sum>9)
                {
                    count++;
                    f = (sum/10)%10;
                    d[j-1] = d[j-1] + f;
                }
            }
        }

        else if(strlen(a)>strlen(b))
        {
            for(i=0; i<=strlen(b); i++)
            {
                hand[i] = c[i];
            }
            for(i=0; i<=strlen(a); i++)
            {
                c[i] = 0;
            }
            for(j=0,i=strlen(a)-strlen(b); i<=strlen(b) || j<=strlen(a); i++,j++)
            {
                c[i] = hand[j];
            }

            for(i=strlen(a)-1,j=strlen(a)-1; i>=0 || j>=0; i--,j--)
            {
                sum = d[j] + c[i];
                if(sum>9)
                {
                    count++;
                    f = (sum/10) % 10;
                    c[i-1] = c[i-1] + f;
                }
            }
        }

        else if(strlen(a)<strlen(b))
        {
            for(i=0; i<=strlen(a); i++)
            {
                hand[i] = d[i];
            }
            for(i=0; i<=strlen(b); i++)
            {
                d[i] = 0;
            }
            for(j=0,i=strlen(b)-strlen(a); i<=strlen(a) || j<=strlen(b); i++,j++)
            {
                d[i] = hand[j];
            }

            for(i=strlen(b)-1,j=strlen(b)-1; i>=0 || j>=0; i--,j--)
            {
                sum = d[j] + c[i];
                if(sum>9)
                {
                    count++;
                    f = (sum/10) % 10;
                    d[j-1] = d[j-1] + f;
                }
            }
        }

        if(count == 0)
        {
            printf("No carry operation.\n");
        }
        else if(count == 1)
        {
            printf("%d carry operation.\n",count);
        }
        else
        {
            printf("%d carry operations.\n",count);
        }
    }
    return 0;
}
