#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int N;
    scanf("%d", &N);

    int start = pow(10, N - 1);  // ����Nλ������ʼֵ
    int end = pow(10, N) - 1;    // ����Nλ���Ľ���ֵ

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // �������ֵ�λ��
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    // ����ÿ��λ�����ֵ�N����֮��
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // �ж��Ƿ�Ϊˮ�ɻ���
    return (sum == originalNum);
}
