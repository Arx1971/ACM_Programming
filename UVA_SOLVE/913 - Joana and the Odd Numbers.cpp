#include <stdio.h>

int main(void)

{
    long long int a,b,c,x,n,i,j;

    while(scanf("%lld",&a)==1){

        x = a % 2;
        c = a/2;
        n = x+c;

        b = (a*n)+(n-1);

        printf("%lld\n",(b*3)-6);
        }
    return 0;
}
