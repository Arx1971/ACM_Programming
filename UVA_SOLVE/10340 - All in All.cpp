#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)

{
    char a[1000000],b[1000000],hand;

    int n,i,j,k,l,count,temp,c,x=0;

    while(scanf("%s %s",a,b)!=EOF)
    {
        count = 0,x=0;

        for(i=0;i<strlen(a);i++)
        {
            for(j=x;j<strlen(b);j++)
            {
                if(a[i]==b[j])
                {
                    count++;
                    x = j + 1;
                    break;
                }
            }
        }
        if(strlen(a)==count)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
