#include <iostream>
using namespace std;

/*
    1. n�� �Է¹޴´�.
    2. �������� ������ ����Ѵ�.
    3. �������� ������ ����Ѵ�.

*/
int main() {
    //1
    int n;
    cin >> n;

    //2
    int cross = (n * (n - 1) * (n - 2) * (n - 3)) / 24;

    //3
    cout << cross;

    return 0;
}