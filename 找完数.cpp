#include<stdio.h>
int main(){
	int m,n,sum,num=0;       //��������Ҫ�����б���
	scanf("%d %d",&m,&n);
	for(int i=m;i<=n;i++){      //����ѭ����[m,n]��ÿ�����ֽ�������
		if(i==1)           //��1�����������������
            continue;       //�������ѭ��
		sum=1;           //��ÿ�ε�sumֵ��ʼ��
		for(int j=2;j<i;j++)         //�������Ƿ�Ϊ��������
			if(i%j==0) 
                sum+=j;
		if(sum==i)         //��sum=iʱ��sum��ֵ��Ϊ���������
		{
			printf("%d = 1",i);      //����ʽ�������
			for(int j=2;j<i;j++)         //����ѭ���ҳ���1�ͱ������������
				if(i%j==0)        //jΪsum��������
					printf(" + %d",j);       //����ʽ�����������
			printf("\n");
			num++;       //��¼������[m,n]�е�����
		}
	}
	if(num==0)        //����û�����������
        printf("None");
	return 0;
}