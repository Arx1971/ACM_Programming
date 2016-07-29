#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    int x,n,r,c,k=0;

    char a[100][100];

    scanf("%d",&x);

    while(x--)
    {
        scanf("%d",&n);

        if(n==1)
        {
            for(int i=0;i<n;i++)
            {
                scanf("%s",a[i]);
            }
            if(a[0][0]=='#'||a[0][0]=='.')
            {
                 printf("Case #%d: NO\n",++k);
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                scanf("%s",a[i]);
            }

            int count = 0;

            int d = 0;

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(a[i][j]=='#')
                    {
                        count++;
                    }
                }
            }

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(a[i][j]=='#')
                    {
                        d = 1;
                        r = i;
                        c = j;
                        break;
                    }
                }
                if(d==1)
                {
                    break;
                }
            }

            int temp = 0;

            for(int i = c; i<n ; i++)
            {

                if(a[r][i]!='#')
                {
                    break;
                }
                temp++;
            }
            ///printf("t = %d\n",temp);

            int hand = 0;

            for(int i=r; i<temp+r; i++)
            {
                for(int j=c; j<temp+c; j++)
                {
                    if(a[i][j]=='#')
                    {
                        hand++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            ///printf("c = %d\n",count);
            ///printf("h = %d\n",hand);

            if(hand == count && hand == temp*temp)
            {
                printf("Case #%d: YES\n",++k);
            }
            else
            {
                printf("Case #%d: NO\n",++k);
            }
        }

    }
    return 0;
}
