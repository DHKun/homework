#include <iostream>
#include <algorithm>
using namespace std;

//��������
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int num[30]; 

    cout << "������30������: ";
    for (int i = 0; i < 30; i++) {
        cin >> num[i];
    }

    //����
    sort(num, num + 30);

    cout << "����������Ϊ: ";
    for (int i = 0; i < 30; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}

