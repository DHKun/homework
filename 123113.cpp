#include <iostream>
using namespace std;
int main()
{
	int n,i,j,n_u,n_l;
	cout << "��������һ��������";
	cin >> n;
	n_u=n/2+1;//�ϰ벿������
	n_l=n/2;//�°벿������ 
	for(i=1; i<=n_u; i++)//�ϰ벿�� 
	{
		for(j=1; j<=n_u-i; j++)//"n_u-i"��ǰ�е�һ���Ǻ���ߵĿո���//
			cout << ' ';
		
		if(i==1)
			cout << '*';
		else{
			cout << '*';
			for(j=1; j<=2*(i-1)-1; j++)//"2*i-1"Ϊ��ǰ�е��Ǻ���// 
			    cout << ' ';
			cout << '*';
		}
		
		cout << endl;//����//
	}
	for(i=n_l; i>=1; i--)//�°벿��
	{
		for(j=1; j<=n_l-i+1; j++)//"n_l-i"��ǰ�е�һ���Ǻ���ߵĿո���// 
			cout << ' ';
		if(i==1)
			cout << '*';
		else{
			cout << '*';
			for(j=1; j<=2*(i-1)-1; j++)//"2*i-1"Ϊ��ǰ�е��Ǻ���// 
			cout << ' ';
			cout << '*';
		}
		
		cout << endl;//����//
	}
}

