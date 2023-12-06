#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    int k;
    int a[k];
    scanf("%d",&a[k]);
    for(int j=0;j<n-1;j++){
        if(a[k]<a[j]){
            a[j-1]=a[k];break;
        }
    }
    for(int m=0;m<n;m++){
        print("%d ",a[m]);
    }
    return 0;
}