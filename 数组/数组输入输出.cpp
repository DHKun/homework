#include <stdio.h>
#define SIZE 4
int main() {
    int a[SIZE];
    printf("����%d������\n",SIZE);
    for (int i=0; i<SIZE; i++) {
        scanf("%d", &a[i]);
    }//input
    for (int i=0; i<SIZE;i++) {
        printf("%d ",a[i]);
    }//output
    return 0;
}