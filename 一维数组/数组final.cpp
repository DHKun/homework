#include <stdio.h>

#define SIZE 4

void maopaoshengxu(int a[],int n);//ð����������
void maopaojiangxu(int a[],int n);//ð�ݽ�������
void xuanzepaixu(int a[],int n);//ѡ������
int shunxusearch(int a[],int n,int target);//˳�����
int erfensearch(int a[],int target);//���ַ�����
void MAX(int a[]);
void MIN(int a[]);

int main() {
    int a[SIZE];
    printf("����%d������\n",SIZE);
    
    for (int i=0; i<SIZE; i++) {
        scanf("%d", &a[i]);
    }//input

    //ð������
    // maopaoshengxu(a,SIZE);
    // maopaojiangxu(a,SIZE);

    //ѡ������
    //xuanzepaixu(a,SIZE);

    //˳�����
    //int target;
    //scanf("%d",&target);
    //int index=shunxusearch(a,SIZE,target);
    // if (index!=-1) {
    //     printf("Ŀ��Ԫ��λ�ã�%d\n",index);
    // } else {
    //     printf("error\n");
    // }

    //���ַ�����
    //int target=0;
    //scanf("%d",&target);
    // int result=erfensearch(a,target); 
    // if (result==-1) { 
    //     printf("Ŀ��Ԫ�ز�����");
    // }
    // else {
    //     printf("Ŀ��Ԫ�ص������ǣ�");
    //     printf("%d",result);
    // }

    //���ֵ
    //MAX(a);

    //��Сֵ
    //MIN(a);

    for (int i=0; i<SIZE;i++) {
        printf("%d ",a[i]);
    }//output

    return 0;
}

void maopaoshengxu(int a[],int n){
	int t;
	int j=0;
	int i;
	int f;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		for(f=0;f<10;f++){
			printf("%d ",a[f]);
		}
		printf("\n");	
	}
}

void maopaojiangxu(int a[],int n){
	int t;
	int j=0;
	int i;
	int f;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		for(f=0;f<10;f++){
			printf("%d ",a[f]);
		}
		printf("\n");	
	}
}

void xuanzepaixu(int a[],int n){
    for (int i=0;i<n-1;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[max]) {
               max=j;
            }
        }
        int temp=a[i];
        a[i]=a[max];
        a[max]=temp;
    }
}

int shunxusearch(int a[],int n,int target){
    for (int i=0;i<n;i++) {
        if (a[i]==target) {
            return i;
        }
    }
    return -1;
}

int erfensearch(int a[],int target){
    int left=0;
    int right=SIZE-1;
    while(left<=right){ 
        int mid=left+(right-left)/2;
        if(a[mid]==target) {
            return mid;
        }
        else if(a[mid]<target) {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

void MAX(int a[]){
    int MAX=0;
    for(int i=0;i<SIZE;i++){
        if(a[MAX]<a[i]){
            MAX=i;
        }
    }
    printf("MAX is %d",a[MAX]);
}

void MIN(int a[]){
    int MIN=0;
    for(int i=0;i<SIZE;i++){
        if(a[MIN]>a[i]){
            MIN=i;
        }
    }
    printf("MIN is %d",a[MIN]);
}