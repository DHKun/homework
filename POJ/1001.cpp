//��߾�����
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
int main() {
	int n;//����
	string s;// �����ǰ��λ
	while(cin>>s>>n) {
		int result[250]= {0};//�洢���
		char temp[6];//�������ǰ��λתΪ����
		int p=0,R=0;//P��ʾԭʼ����С��������Чλ���� ��R�ǲ���С�������ֵ
		int count = 0;
		for(int i = 0; i < 6 ; i++) { //�ҵ�С�����λ��
			if(s[i] == '.') {
				temp[i] = -1;//С�����ǳɸ�һ
				p =  5-i;//С������м�λ
				continue;//��С������
			}
			temp[i] = s[i];
		}
		//p=0˵��û��С����
		//���Ŵ���һ�Σ���С��������Ч0���Ϊ-1,
		if( p != 0) {
			for(int i =5 ; i>=0 ; i--) {
				if(temp[i] != '0') {
					//��ȥ��Ч0��P��ֵ
					p = p-(5-i);
					break;
				}
				temp[i] = -1;
			}
		}
		//	cout<<" PΪ"<<p<<endl;
		for(int i = 0; i < 6; i++) {
			if(temp[i] != -1) {
 
				R = R*10+(s[i]-'0');  //����������� R ��ȡ����
			}
		}
		//cout <<" RΪ"<<R<<endl;
		//��R����ת�����ַ�����
		string med;
		stringstream ss;
		ss<<R;
		med = ss.str();
		int len = med.length();		//���ݳ���
		int m = p*n; //���ֵ����С�����Ӧ���м�λ��Ч��
		int k=1;
		//cout <<" lenΪ"<<len<<endl;
		for(int i = 1 ; i <= len ; i++) {
			result[249 - len+i] = med[i-1]-'0';//����ʼֵ����result,��ʱΪR����Чֵ
		}
		while(n > 1) {
			int j = 249;
			int tp = 0;//��ʱ�洢
			++k;
			for(int j = 249; j >= 0 ; j--) {
				//ÿһ����Чλλ������Rֵ
				if( j <= 250 - k*len  && tp == 0 ) {//������Ϊ������100*100���Ƶ�ĩβΪ0�����
					continue;
				}
				int medi = result[j]*R+tp;
				tp = medi / 10;
				result[j] = medi % 10;
				//	cout<<j<<"λ�õ�ֵ�� "<< result[j] <<endl;
 
			}
			n--;
		}
		//��ʼ���������P�ǳ�ʼֵС����������ݸ�����n������
		for(int i = 0 ; i<250 ; i++) {
			if(result[i] != 0) {
				count = 250 - i;//result�����Ч����
				break;
			}
		}
		if( m >= count) { //˵�����С��1
			if(count == 0) {//�����Ϊ0
				cout<<0<<endl;
				continue;
			}
			cout << ".";
			for(int i = 250 - m; i < 250; i++) {
				cout << result[i];
			}
		} else { //�������1
			for(int i = 250 - count; i < 250; i++) {
				cout << result[i];
				if(i == 249 - m && i!=249) {
					cout << ".";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}