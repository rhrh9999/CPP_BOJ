#include <iostream>
#include <algorithm>
using namespace std;

/*
1. �׽�Ʈ���̽� ���� t�� �Է¹޴´�.
2. �� ���̽����� �ټ� ���� ������ �Է¹޴´�.
3. �� ���̽����� ������ ����Ѵ�. 
���� ������ �ʿ��� ���� KIN�� ����Ѵ�.
4. �� �������� ����Ѵ�.
*/


int main() {
    int t;
    cin >> t;

    while (t--) {
        int num[5] = { 0, };
        string res;
        for (int i = 0; i < 5; i++) {
            cin >> num[i];
        }
        sort(num, num + 5);

        //3
        if (num[3] - num[1] >= 4)
            cout << "KIN" << endl;
        else
            cout << num[1] + num[2] + num[3] << endl;
          
    }
    return 0;
}