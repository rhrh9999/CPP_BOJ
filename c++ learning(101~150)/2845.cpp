#include <iostream>
using namespace std;

/*
    1. ����� ���� ��Ƽ�� ���ȴ� ���� ���̸� �Է¹޴´�.
    2. �� ��翡 �Ƿ��ִ� �������� ���� �Է¹޴´�.
    3. �� ��� ���� ���̸� ����Ѵ�.

*/
int main() {
    //1
    int l, p;
    cin >> l >> p;
    int real = l * p;

    //2
    int news = 0;
    for (int i = 0; i < 5; i++) {
        cin >> news;
        cout << news - real << " "; //3
    }

    return 0;
}