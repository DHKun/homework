#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("请输入三个数字: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n2 > n3) {
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("排序后的数字为: %d, %d, %d\n", n1, n2, n3);

    return 0;
}

