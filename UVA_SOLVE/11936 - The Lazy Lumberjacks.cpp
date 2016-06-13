#include <stdio.h>

int main(void)

{
    int a,b,c,n,x=0,i,j,y=0;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
        {
            printf("OK\n");
        }

        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}
