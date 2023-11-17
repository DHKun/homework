#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

void hollowPyramid ( int n )
{
    int i,j,k,z;
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            printf(" ");
        }
        printf("%d",i);
        if(i==1) printf("\n");
        if(i>=2&&i<n)
        {
            for(k=0;k<2*i-3;k++)
            {
                printf(" ");
            }
            printf("%d\n",i);
        }
    }
    i=i-1;
    if(i==n)
    {
        for(z=0;z<2*n-2;z++)
        {
            printf("%d",i);
        }
    }
    return;
}