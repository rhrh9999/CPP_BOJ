#include <iostream>
using namespace std;

/*
    1. �� ���� a,b�� �Է¹޴´�.
    2. �� ���� ���̿� �ִ� ������ ���� ���Ѵ�.
    3. ���� ����Ѵ�. 
*/

int main() {
    //1
    long long a, b;
    cin >> a >> b;

    //2 
    if (a <= b)
        cout << ((b - a + 1) * (a + b) / 2);
    else //b�� �� ���� ���
        cout << ((a - b+ 1) * (a + b) / 2);

    return 0;
}