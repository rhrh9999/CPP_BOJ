#include <iostream>
#include <stdlib.h> //���� abs�Լ� 
using namespace std;

/*
    1. �� �������� ������ �Է¹޴´�.
    2. �� ������ ���̸� ���Ѵ�.
    3. ���̸� ����Ѵ�.
*/

int main() {
    //1
    long n, m; //���� int�� �ϸ� ����
    cin >> n >> m;

    //2
    cout <<abs(n - m);

    return 0;
}