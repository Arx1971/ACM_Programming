#include <stdio.h>

int main(void)

{
    int x,y,a=0,b=0,c=0,n,i,j;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        a = x/3;
        b = y/3;
        c = a*b;

        printf("%d\n",c);
        }
    return 0;
}
