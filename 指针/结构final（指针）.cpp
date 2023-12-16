#include<iostream>
#include<iomanip>

#define size 4
using namespace std;

struct student{
    int no;
    char na[100];
    int score;
};

void print(student* stu,int n);
void maopaopaixu(student* stu,int n);//ð������
void xuanzepaixu(student* stu,int n);//ѡ������
void shunxusearch(student* stu,int n,int target);//˳�����
void erfensearch(student stu[],int target);//���ַ�����
void MAX(student* stu);
void MIN(student* stu);

int main(){
    student stu[size]={{1601,"TINA",34},{1023,"TOM",35},{1008,"JERRY",36},{1021,"SAM",37}};
    
    // for(int i=0;i<size;i++){
    //     cout << "ѧ��:" << endl;
    //     cin >> stu[i].no;
    //     cout << "����:" << endl;
    //     cin >> stu[i].na;
    //     cout << "�ɼ�:" << endl;
    //     cin >> stu[i].score;
    // }

    //ð������
    //maopaopaixu(stu,size);

    //ѡ������
    //xuanzepaixu(stu,size);

    //˳�����
    // int target;
    // scanf("%d",&target);
    // shunxusearch(stu,size,target);

    //���ַ�����
    // int target=0;
    // scanf("%d",&target);
    // erfensearch(stu,target); 

    //���ֵ
    //MAX(stu);

    //��Сֵ
    //MIN(stu);

    //print(stu,size);

    return 0;
}

void print(student* a,int n){
	student* p;
	cout<<setw(7)<<"ѧ��"<<setw(7)<<"����"<<setw(7)<<"�ɼ�"<<endl;
	for(p=a;p<a+n;p++){
		cout<<setw(7)<<p->no<<setw(7)<<p->na<<setw(7)<<p->score<<endl;
	}
}

void maopaopaixu(student* stu, int n){
    student* p=stu;
    student temp;
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if ((p+j)->score<(p+j+1)->score) {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    print(p,size);
}

void xuanzepaixu(student* stu,int n){
    student* p=stu;
    for(int i=0;i<n-1;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if((p+j)->score>(p+max)->score) {
                max=j;
            }
        }
        student temp=*(p+i);
        *(p+i)=*(p+max);
        *(p+max)=temp;
    }
    print(p,size);
}

void shunxusearch(student* stu,int n,int target){
    student *p=stu;
    int index;
    for(int i=0;i<n;i++){
        if((p+i)->score==target){
            index=i;break;
        }else{
            index=-1;
        }
    }
    if(index!=-1) {
        cout << "Ŀ��Ԫ���ڵ�" << index+1 << "��" <<endl;
    }else{
        cout<<"error"<<endl;
    }
}

void erfensearch(student* stu,int target){
    student* p=stu;
    int coin=0;
    int left=0;
    int right=size-1;
    int result=-1;
    if(p->score<(p+1)->score){
        coin=1;
    }else{
        coin=-1;
    }
    while(left<=right&&coin==1){ 
        int mid=left+(right-left)/2;
        if((p+mid)->score==target) {
            result=mid;break;
        }
        else if((p+mid)->score<target) {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    while(left<=right&&coin==-1){ 
        int mid=left+(right-left)/2;
        if((p+mid)->score==target) {
            result=mid;break;
        }
        else if((p+mid)->score<target) {
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    if(result==-1){ 
        cout << "Ŀ��Ԫ�ز�����" << endl;
    }
    else{
        cout << "Ŀ��Ԫ���ڵ�" << result+1 << "��" << endl;
    }
}

void MAX(student* stu){
    student* p=stu;
    int MAX=0;
    for(int i=0;i<size;i++){
        if((p+MAX)->score<(p+i)->score){
            MAX=i;
        }
    }
    cout<< "MAX is" << (p+MAX)->score << endl;
}

void MIN(student* stu){
    student *p=stu;
    int MIN=0;
    for(int i=0;i<size;i++){
        if((p+MIN)->score>(p+i)->score){
            MIN=i;
        }
    }
    cout << "MIN is" << (p+MIN)->score << endl;
}