#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //1. �� ���� ���� �Է¹޴´�.
    //2. �� ���� ������������ �����Ѵ�.
    //3. ������ ���� ����Ѵ�.

    //1
    int num[3] = { 0, };
    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }

    //2
    sort(num, num + 3);

    //3
    for (int i = 0; i < 3; i++) {
        cout << num[i] << ' ';
    }

    return 0;

}