#include <stdio.h>
void paixu(int a[],int n);
#define SIZE 5
int main() {
   int a[SIZE];
    printf("����%d������\n",SIZE);
    for (int i=0; i<SIZE; i++) {
        scanf("%d", &a[i]);
    }
    printf("����ǰ��");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    paixu(a, SIZE);
    printf("�����");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

void paixu(int a[],int n) {
    for (int i=0; i<n-1;i++) {
        int min=i;
        for (int j = i + 1; j < n; j++) {
            if (a[j]<a[min]) {
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min] = temp;
    }
}