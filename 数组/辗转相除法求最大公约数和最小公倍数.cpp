#include <stdio.h>
int gys(int a,int b);
int gbs(int a, int b);
int main() {
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    int gysv=gys(n1,n2);
    int gbsv=gbs(n1,n2);
    printf("���Լ����%d\n",gysv);
    printf("��С��������%d\n",gbsv);
    return 0;
}
int gys(int a,int b) {
    while (b!=0) {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int gbs(int a,int b) {
    int gysv=gys(a, b);
    return (a*b)/gysv;
}