#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int n,t,j;
    scanf("%d",&n);
    vector<int> v;
    vector<int> y(10,0);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        v.push_back(t);
        if(v[i]!=0) {
            while(v[i]!=0){
                y[v[i]%10]++;// ��¼�����ֵĸ�λ��
                v[i]=v[i]/10;// ȥ�������ֵĸ�λ��
            }
        }
    }
    j=y[0];// ��ʼ��jΪy�е�һ�����ֵĳ��ִ���
    int maxCount=y[0];// ��ʼ��maxCountΪy�е�һ�����ֵĳ��ִ���
    for(int i=0;i<10;i++){
        if(maxCount<=y[i]) maxCount=y[i];// �ҵ�y�г��ִ��������ֵ
    }
    printf("%d:",maxCount);// ��������ִ���
    for(int i=0;i<10;i++){
        if(maxCount==y[i]){
            printf(" %d",i);// ������ִ�����������
        }
    }
    return 0;
}
