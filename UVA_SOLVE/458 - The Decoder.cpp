#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)

{
    char a[100000];

    int n,i,j,k,l,count = 0;

    while(scanf("%s",a)!=EOF)
    {
        for(i=0;i<strlen(a);i++)
        {
            printf("%c",a[i]-7);
        }
        printf("\n");
    }
    return 0;
}
