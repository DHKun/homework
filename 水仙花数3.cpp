#include <stdio.h>
#include <math.h>
int main () {
    int N,A,B,i,j,t,num,sum;
    scanf("%d", &N);
    A = pow(10,N-1);
    B = A*10;
    for (i = A; i < B; i++) {
        num = i;   // ��Ϊ������������sum��Ҫ��i���бȽϣ�����ÿ�ΰ�i��ֵ��num��
        sum = 0;   // ÿ��Ҫ��sum���¸�ֵΪ0��
        for (j = 0; j < N; j++) {   // ���ѭ������������num�ĸ���λ���ֵ�N�η��ĺ͵�
            t = num%10;             // ÿ��ȡ���λ������
            sum += pow(t,N);
            num /= 10;              // ������󣬶�num����10
        }
        if (sum == i) printf("%d\n",i);
    }
    return 0;
}

�Ż���
#include <stdio.h>
#include <math.h>
int main () {
    int N,A,B,i,j,k,t,num,sum,prod;
    scanf("%d", &N);
    A = pow(10,N-1);
    B = A*10;
    for (i = A; i < B; i++) {
        num = i;
        sum = 0;
        for (j = 0; j < N; j++) {
            t = num%10;
            for (k = 0, prod = 1; k < N; k++) prod *= t;
            sum += prod;
            num /= 10;
        }
        if (sum == i) printf("%d\n",i);
    }
    return 0;
}