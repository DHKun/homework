#include<iostream>
#define size 4
using namespace std;

struct student{
    int no;
    char na[100];
    int score;
};

void maopaopaixu(student stu[],int n);//ð������
void xuanzepaixu(student stu[],int n);//ѡ������
int shunxusearch(student stu[],int n,int target);//˳�����
int erfensearch(student stu[],int target);//���ַ�����
void MAX(student stu[]);
void MIN(student stu[]);

int main(){
    student stu[size];
    
    for(int i=0;i<size;i++){
        cout << "num:" << endl;
        cin >> stu[i].no;
        cout << "name:" << endl;
        cin >> stu[i].na;
        cout << "score:" << endl;
        cin >> stu[i].score;
    }

    //ð������
    //maopaopaixu(stu,size);

    //ѡ������
    //xuanzepaixu(stu,size);

    //˳�����
    // int target;
    // scanf("%d",&target);
    // int index=shunxusearch(stu,size,target);
    // if (index!=-1) {
    //     printf("Ŀ��Ԫ��λ�ã�%d\n",index);
    // } else {
    //     printf("error\n");
    // }

    //���ַ�����
    // int target=0;
    // scanf("%d",&target);
    // int result=erfensearch(stu,target); 
    // if(result==-1){ 
    //     printf("Ŀ��Ԫ�ز�����");
    // }
    // else{
    //     printf("Ŀ��Ԫ�ص������ǣ�");
    //     printf("%d",result);
    //     printf("/n");
    // }

    //���ֵ
    //MAX(stu);

    //��Сֵ
    //MIN(stu);

    for(int j=0;j<size;j++){
        cout << "num: " << stu[j].no << "name: " << stu[j].na << "score: "  << stu[j].score << endl;
    }

    return 0;
}

void maopaopaixu(student stu[], int n){
    student temp;
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if (stu[j].score<stu[j+1].score) {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }
    }
}

void xuanzepaixu(student stu[],int n){
    for(int i=0;i<n-1;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(stu[j].score>stu[max].score) {
                max=j;
            }
        }
        student temp=stu[i];
        stu[i]=stu[max];
        stu[max]=temp;
    }
}

int shunxusearch(student stu[],int n,int target){
    for (int i=0;i<n;i++) {
        if (stu[i].score==target) {
            return i;
        }
    }
    return -1;
}

int erfensearch(student stu[],int target){
    int left=0;
    int right=size-1;
    while(left<=right){ 
        int mid=left+(right-left)/2;
        if(stu[mid].score==target) {
            return mid;
        }
        else if(stu[mid].score<target) {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

void MAX(student stu[]){
    int MAX=0;
    for(int i=0;i<size;i++){
        if(stu[MAX].score<stu[i].score){
            MAX=i;
        }
    }
    printf("MAX is %d/n",stu[MAX]);
}

void MIN(student stu[]){
    int MIN=0;
    for(int i=0;i<size;i++){
        if(stu[MIN].score>stu[i].score){
            MIN=i;
        }
    }
    printf("MIN is %d/n",stu[MIN]);
}