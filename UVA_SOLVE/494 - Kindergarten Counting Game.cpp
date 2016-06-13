#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)

{
    char a[10000],dump[10];

    int n,i,j=0,k,l,count = 0,hand,temp;

    while(gets(a))
    {
        count = 0;

        for(i=0; a[i]!='\0'; i++)
        {
            if(isalpha(a[i]))
            {
                count++;

                for(j=i; a[j]!='\0'; j++)
                {
                    if(!isalpha(a[j]))
                    {
                        break;
                    }
                }
                i = j;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
