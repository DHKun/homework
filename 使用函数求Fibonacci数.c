#include <stdio.h>

int fib( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}
int fib(int n)
{
    int m=1,h=1,i=1;
    int s;
    if(n<=2)
        return 1;
    else
    for(;i<=n-2;i++)
    {
        s=m+h;m=h;h=s;
    }
    return s;
}
