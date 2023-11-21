#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ){
    int gewei,shiwei,baiwei;
    int a,b;
    gewei=number%10;
    a=number/10;
    shiwei=a%10;
    b=a/10;
    baiwei=b%10;
    if(number==gewei*gewei*gewei+shiwei*shiwei*shiwei+baiwei*baiwei*baiwei){
        return 1;
    }else{
        return 0;
    }
}
void PrintN( int m, int n ){
    int i=m+1;
    while(i<n){
        if(narcissistic(i)==1){
            printf("%d\n",i);
        }
        i++;
    }
}