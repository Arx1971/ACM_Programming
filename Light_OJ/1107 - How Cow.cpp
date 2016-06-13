#include <stdio.h>

int main(void)

{
    int x1,x2,y1,y2,j,x,y,n,i,a,b,c;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

        scanf("%d",&a);

        printf("Case %d:\n",i);

        for(j=1; j<=a; j++)
        {
            scanf("%d %d",&x,&y);

            if(x>x1 && x<x2 && y>y1 &&y<y2)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
    return 0;
}
