#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //1. �ټ� ���� �ڿ����� �Է¹޴´�.
    //2. ��հ� �߾Ӱ��� ���Ѵ�.
    //3. ��հ� �߾Ӱ��� ����Ѵ�.

    //1
    int num[5] = { 0, }, sum = 0; 
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        sum += num[i];
    }

    //2
    int aver = 0, mid = 0; 
    //��� ���ϱ�
    aver = sum / 5;
    //�߾Ӱ� ���ϱ�
    sort(num, num + 5);
    mid = num[2];

    //3
    cout << aver << endl << mid;
    
    return 0;
}