#include <iostream>
using namespace std;

/*
    1. �׽�Ʈ���̽��� ���� t�� �Է¹޴´�.
    2. �� �׽�Ʈ���̽� �� �Ž������� �Է¹޴´�. 
    3. �� ���̽����� �ʿ��� ����, ����, ����, ����� ���� ���Ѵ�.
    4. �� �������� ���� ����Ѵ�.

*/

void change(int c) {
    //���� 25
    cout << c / 25 << " ";
    c %= 25;

    //���� 10
    cout << c / 10 << " ";
    c %= 10;

    //����
    cout << c / 5 << " ";
    c %= 5;

    //���
    cout << c / 1 << endl;
}

int main() {
    //1
    int t;
    cin >> t;

    //2
    while (t--) {
        int c;
        cin >> c;

        //3 �Լ��� ���
        change(c);
    }

    return 0;
}