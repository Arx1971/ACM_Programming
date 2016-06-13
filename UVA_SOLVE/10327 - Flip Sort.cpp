#include<stdio.h>
int main()
{
int n;
while(scanf("%d",&n)!=EOF)
    {
        int array[1000];
        register int i,j;
        int temp,count=0;
        for(i=0  ; i<n ; i++)
            {scanf("%d", &array[i]);}

        for(i=0 ; i<n-1; i++)
            {
                for( j=i+1 ; j<=n-1 ; j++)
                    if(array[i]>array[j])count++;

            }
        printf("Minimum exchange operations : %d\n",count);
    }
return 0;
}
