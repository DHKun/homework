#include<stdio.h>
int main(){
      int i=0;
      int j=0;
      int n=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
      for(j=1;j<=n+i-1;j++)
       {                                   //n+i-1��ÿ��*��λ��
         if(j==n-i+1||j==n+i-1)    //n+i-1��ÿ�����*��λ��
             printf("*");
         else
             printf(" ");
         }
printf("\n");
}                 //��������������������ӡ�ϰ벿�֡�   
for(i=1;i<n;i++)      //�����������һ��
{
     for(j=1;j<=2*n-i-1;j++)
         {
               if(j==i+1||j==2*n-i-1)   //i+1����i�ӵ�һ������*��λ��i+1��λ��
                    printf("*");            //2*n-i-1�������õ���һ�е�Ԫ�ظ�����Ҳ�����һ��*�ڵ�λ��
               else
                    printf(" ");
          }
printf("\n");
}    
return 0;
}


