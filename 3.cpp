#include <stdio.h>
#include <stdlib.h> //ʹ��qsort����

// ��������
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int num[30]; 

    printf("������30������: ");
    for (int i = 0; i < 30; i++) {
        scanf("%d", &num[i]);
    }

    qsort(num, 30, sizeof(int), compare);

    printf("����������Ϊ: ");
    for (int i = 0; i < 30; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
