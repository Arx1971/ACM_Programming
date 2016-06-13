#include <stdio.h>

int main(void)

{
    int n,a,b,c,d,e,f,g,i,x=0;

    while(scanf("%d %d",&a,&b)==2){

        g = a;
        x=0;

        while(a>=b){


            e = a % b;
            f = a/b;
            a = e + f;
            x = x + f;
            }
            g = g + x;

            printf("%d\n",g);

        }

    return 0;
}
