#include<stdio.h>
int main()
{
    double n=1;//���ڱ�ʾ��ĸ�ı仯
    double eps=0;//���ڴ�ž���
    double s=1;//���ڴ�ŷ�ʽ
    double sum=0;//���ڴ�Ž��
    int flag=1;//������ʾ��ʽ������
    scanf("%lf",&eps);
    do//ʹ��do--while��䣬���⾫�����ô���1ʱ������sum=0�����
    {
        s=1.0/n;    //��λ����Ҫ�ر�ע�⣬s�ı仯����sum��ǰ��
        sum=flag*s+sum;
        n=n+3;
        flag=-1*flag;
    }while(s>=eps);
    printf("sum = %.6f",sum);
}

