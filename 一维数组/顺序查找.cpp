#include <stdio.h>
#define SIZE 5
int search(int a[],int n,int target) {
    for (int i=0;i<n;i++) {
        if (a[i]==target) {
            return i;
        }
    }
    return -1;
}

int main() {
     int a[SIZE];
     int i;
    printf("����%d������\n",SIZE);
    for (int i=0; i<SIZE;i++) {
        scanf("%d", &a[i]);
    }
    printf("���飺");
    for (int i=0; i<SIZE;i++) {
    printf("%d ",a[i]);
    }
    printf("\n");
    int target;
    printf("Ҫ���ҵ�Ԫ�أ�");
    scanf("%d",&target);
    printf("���ҵ�Ԫ�أ�%d\n",target);
    int index=search(a,SIZE,target);
    if (index != -1) {
        printf("Ŀ��Ԫ��λ�ã�%d\n",index);
    } else {
        printf("error\n");
    }
    return 0;
}
