#include <iostream>
using namespace std;
/*
    1. �����̰� ã�� �� �ǽ��� ������ �Է¹޴´�. 
    2. ���� �ǽ��������� ���̸� ���Ѵ�.
    3. �� ���̸� ����Ѵ�.
*/

int main() {
    //1
    int ori[6] = { 1,1,2,2,2,8 };
    int real[6] = { 0, };
    //2.3
    for (int i = 0; i < 6; i++) {
        cin >> real[i];
        cout << ori[i] - real[i] << " ";
    }

    return 0;
}