#include <iostream>
using namespace std;

/*
    1. ���� n�� �Է¹޴´�.
    2. ��� ���� �Է¹޴´�. �̶� 0�̸� ����� ��.
    3. �� ��� ���� n�� ������� �Ǵ��Ѵ�.
    4. ���� ������Ŀ� ���� ����Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
    
    while (1) {
        int num;
        cin >> num;
        if (num == 0) break;
        //3,4
        if (num % n == 0) cout << num << " is a multiple of " << n << "." << endl;
        else cout << num << " is NOT a multiple of " << n << "." << endl;
    }

    return 0;
}