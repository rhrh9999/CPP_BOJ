#include <iostream>
using namespace std;

/*
    1.���� ���� �Է¹޴´�.
    2. 2�� 18�� ����,����,�ش������� �Ǵ��Ѵ�.
    3. �� ���̽��� ����� �Ѵ�.
*/

int main() {
    //1
    int mon, day;
    cin >> mon >> day;

    //2,3
    switch (mon)
    {
    case 1:
        cout << "Before\n";
        break;
    case 2:
        if (day==18) {
            cout << "Special\n";
            break;
        }
        else if (day < 18) {
            cout << "Before\n";
            break;
        }
        else {
            cout << "After\n";
            break;
        }
    default:
        cout << "After\n";
        break;
    }

    return 0;
}