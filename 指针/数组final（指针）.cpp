#include <stdio.h>

#define SIZE 4

void print(int* a,int n);
void maopaoshengxu(int* a,int n);//ð����������
void maopaojiangxu(int* a,int n);//ð�ݽ�������
void xuanzepaixu(int* a,int n);//ѡ������
void shunxusearch(int* a,int n,int target);//˳�����
void erfensearch(int* a,int target);//���ַ�����
void MAX(int* a);
void MIN(int* a);

int main(){
    int a[SIZE];
    printf("����%d������\n",SIZE);
    
    for(int i=0;i<SIZE;i++) {
        scanf("%d",&a[i]);
    }//input

    //ð������
    //maopaoshengxu(a,SIZE);
    //maopaojiangxu(a,SIZE);

    //ѡ������
    //xuanzepaixu(a,SIZE);

    //˳�����
    // int target;
    // scanf("%d",&target);
    // shunxusearch(a,SIZE,target);

    //���ַ�����
    // int target=0;
    // scanf("%d",&target);
    // erfensearch(a,target); 

    //���ֵ
    // MAX(a);

    //��Сֵ
    //MIN(a);

    //print(a,SIZE);//output

    return 0;
}

void print(int* a,int n){
    int* p;
     for(p=a;p<a+n;p++) {
       printf("%d ",*p);
    }
}

void maopaoshengxu(int* a,int n){
    int* p;
	int t;
	int j=0;
	int i;
	int f;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(*(a+j)>*(a+j+1)){
				t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
		}
    }
	print(a,SIZE);
	printf("\n");	
}

void maopaojiangxu(int* a,int n){
    int* p;
	int t;
	int j=0;
	int i;
	int f;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(*(a+j)<*(a+j+1)){
				t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
		}
    }
	print(a,SIZE);
	printf("\n");
}

void xuanzepaixu(int* a,int n){
    for (int i=0;i<n-1;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(*(a+j)>*(a+max)) {
               max=j;
            }
        }
        int temp=*(a+i);
        *(a+i)=*(a+max);
        *(a+max)=temp;
    }
    print(a,SIZE);
}

void shunxusearch(int* a,int n,int target){
    int index;
    for(int i=0;i<n;i++){
        if (*(a+i)==target){
            index=i;break;
        }else{
            index=-1;
        }
    }
    if (index!=-1) {
        printf("Ŀ��Ԫ���ڵ�%d��\n",index+1);
    } else {
        printf("error\n");
    }
}

void erfensearch(int* a,int target){
    int left=0;
    int right=SIZE-1;
    int coin=0;
    int result=-1;
    if(*a<*(a+1)){
        coin=1;
    }else{
        coin=-1;
    }
    while(left<=right&&coin==1){ 
        int mid=left+(right-left)/2;
        if(*(a+mid)==target) {
            result=mid;break;
        }
        else if(*(a+mid)<target) {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    while(left<=right&&coin==-1){ 
        int mid=left+(right-left)/2;
        if(*(a+mid)==target) {
            result=mid;break;
        }
        else if(*(a+mid)<target) {
            right=mid-11;
        }
        else{
            left=mid+1;
        }
    }
    if(result==-1){ 
        printf("Ŀ��Ԫ�ز�����");
    }
    else{
        printf("Ŀ��Ԫ���ڵ�%d��",result+1);
    }
}

void MAX(int* a){
    int MAX=0;
    for(int i=0;i<SIZE;i++){
        if(*(a+MAX)<*(a+i)){
            MAX=i;
        }
    }
    printf("MAX is %d\n",*(a+MAX));
}

void MIN(int* a){
    int MIN=0;
    for(int i=0;i<SIZE;i++){
        if(*(a+MIN)>*(a+i)){
            MIN=i;
        }
    }
    printf("MIN is %d\n",*(a+MIN));
}