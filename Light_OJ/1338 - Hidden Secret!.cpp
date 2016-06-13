#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)

{
    char a[10000],b[10000],dump[10];

    int n,i,j,k,l,c,x,count,hand,m;

    scanf("%d",&n);

    gets(dump);

    for(l=1; l<=n; l++)
    {
        count = 0;
        m = 0;
        gets(a);
        gets(b);
        k = 0;

        for(i=0; a[i]!='\0'; i++)
        {
            if(a[i]>='A'&& a[i]<='Z')
            {
                a[i] = a[i] + 32;
            }
        }
        for(i=0; b[i]!='\0'; i++)
        {
            if(b[i]>='A'&& b[i]<='Z')
            {
                b[i] = b[i] + 32;
            }
        }
        for(i=0; b[i]!='\0'; i++)
        {
            if(isalpha(b[i]))
                m++;
        }
        for(i=0; a[i]!='\0'; i++)
        {
            hand = 0;

            for(j=0; b[j]!='\0'; j++)
            {
                if(a[i]==b[j] && isalpha(a[i]) && isalpha(b[j]))
                {
                    hand = 1;
                    count++;
                    b[j] = ',';
                    break;
                }
                else if(b[j]==' ')
                {
                    continue;
                }
            }
        }
        if(count == m)
        {
            printf("Case %d: Yes\n",l);
        }
        else
        {
            printf("Case %d: No\n",l);
        }

    }
    return 0;
}
