#include<stdio.h>
int main()
{
	char ch;
	int s;
	s=0;
	while((ch=getchar())!='\n') //��������ֹͣѭ��
	{
		if(ch==' ')
		s=0;
		else if(s==0)
        //����ĸ��д 1����ͷ��һ����ĸ��д so��s=0  2���ո�����ĸҪ��д so�����ո�ʱs=0
		{
			s=1;//����һ����ĸ��д��s=1��֮���ٴ������ո��Ż��д ��s�ٴ�Ϊ0
			if(ch<='z'&&ch>='a')
			ch=ch-'a'+'A';
		}
		putchar(ch);
	}
	return 0;
 } 


  
 ���鷨��
#include <stdio.h>
#include <stdlib.h>
 
 
int main() 
{
 
   char a[10000];
   gets(a);
   int i=0;
   int count=0;
   int flag=0;
   for(i=0;i<strlen(a);i++)
{	  
   	  if(a[i]!=32)
{
   	  	 count++;   
   	  }
	  else
	  {
	  	   if(count!=0)	
		    {	  
		        	
				if(a[i-count]>='a'&&a[i-count]<='z') a[i-count]-= 32;
			  	count=0;
	  	    }
	  }   	 	  
   }
   if(count>0)
{    
   	  if(a[i-count]>='a'&&a[i-count]<='z') 
      {
          a[i-count]-= 32;
      }
   } 
   for(i=0;i<strlen(a);i++)
{
   		printf("%c",a[i]);
   } 
	return 0;
}