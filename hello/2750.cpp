#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //1. ���� ����n�� �Է¹޴´�.
    //2. n���� ���� �Է¹޴´�.
    //3. ���� ������������ �����Ѵ�.
    //4. ������ ���� ����Ѵ�. 

    //1
    int n;
    cin >> n;

    //2
    int num[1001] = { 0, };
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    //3
    sort(num, num + n);

    //4
    for (int i = 0; i < n; i++) {
        cout << num[i] << endl;
    }

    return 0;
}