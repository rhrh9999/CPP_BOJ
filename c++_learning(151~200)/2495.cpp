#include <iostream>
#include <vector>
using namespace std;

/*
    1. �� ���� �����ڸ� ���� ������ �Է¹޴´�.
    2. �� ������ ���ӵ� ������ ���̸� ���Ѵ�.
    3. ���� �� ���ӵ� ���ڱ��̸� ����Ѵ�.
*/

int main() {
    //1
    string num;
    for (int i = 0; i < 3; i++) {
        int cnt = 1, max = 1;
        cin >> num;
        //2
        for (int j = 0; j < 7; j++) {
            if (num[j] == num[j + 1]) {
                cnt++;
                if (max < cnt) max = cnt;
            }
            else cnt = 1;           
        }
        //3
        cout << max << '\n';
    }
    return 0;
}