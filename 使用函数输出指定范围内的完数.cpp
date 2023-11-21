#include <stdio.h>

// ����һ���������Ӻ�
int factorsum(int number) {
    int sum = 1;
    if(number<=1)return 0;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum;
}

// ��ӡ������Χ�ڵ�������
void PrintPN(int m, int n) {
    int c = 0;
    for (int a = m; a <= n; a++) {
        int sum = factorsum(a);
        if (sum == a) {
            printf("%d = 1", a);
            for (int b = 2; b <= sum / 2; b++) {
                if (sum % b == 0) {
                    printf(" + %d", b);
                }
            }
            printf("\n");
            c = 1;
        }
    }
    if (c == 0) {
        printf("No perfect number\n");
    }
}

int main() {
    int m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m) {
        printf("%d is a perfect number\n", m);
    }
    if (factorsum(n) == n) {
        printf("%d is a perfect number\n", n);
    }
    PrintPN(m, n);

    return 0;
}
