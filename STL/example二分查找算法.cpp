#include <iostream>
#include <vector>

using namespace std;

// ���ֲ����㷨
int binarySearch(vector<int>& nums, int target) {
    int left = 0; // ��߽�
    int right = nums.size() - 1; // �ұ߽�

    while (left <= right) { // ����߽�С�ڵ����ұ߽�ʱѭ��
        int mid = left + (right - left) / 2; // �м�Ԫ�ص�����

        if (nums[mid] == target) { // ����м�Ԫ�ص���Ŀ��Ԫ��
            return mid; // �����м�Ԫ�ص�����
        }
        else if (nums[mid] < target) { // ����м�Ԫ��С��Ŀ��Ԫ��
            left = mid + 1; // ����߽��Ƶ��м�Ԫ�ص��Ҳ�
        }
        else { // ����м�Ԫ�ش���Ŀ��Ԫ��
            right = mid - 1; // ���ұ߽��Ƶ��м�Ԫ�ص����
        }
    }

    return -1; // Ŀ��Ԫ�ز�����
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9}; // ��������
    int target = 7; // Ŀ��Ԫ��

    int result = binarySearch(nums, target); // ʹ�ö��ֲ����㷨����Ŀ��Ԫ�ص�����

    if (result == -1) { // ������ؽ��Ϊ-1����ʾĿ��Ԫ�ز�����
        cout << "Ŀ��Ԫ�ز�����" << endl; // ��ӡ��ʾ��Ϣ
    }
    else { // ����Ŀ��Ԫ�ش���
        cout << "Ŀ��Ԫ�ص������ǣ�" << result << endl; // ��ӡĿ��Ԫ�ص�����
    }

    return 0;
}
