#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v; // ����һ���յ�vector

    // ��vector�����Ԫ��
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // ����vector�е�Ԫ��
    cout << "The first element is: " << v[0] << endl;
    cout << "The second element is: " << v[1] << endl;
    cout << "The third element is: " << v[2] << endl;

    // �޸�vector�е�Ԫ��
    v[1] = 4;

    // ɾ��vector�е�Ԫ��
    v.pop_back();

    // ���vector�е�Ԫ��
    cout << "The elements in the vector are: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
