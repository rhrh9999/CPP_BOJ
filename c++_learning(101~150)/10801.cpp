#include <iostream>
using namespace std;
/*
    1. A�� ī�� 10���� B�� ī�� 10���� �Է¹޴´�.
    2. �� ������ ���и� Ȯ���Ѵ�.
    3. ���� �¸��� ����� ����Ѵ�.
*/

int main() {
    //1
    int a[10], b[10];
    int awin = 0, bwin = 0;

    //a ���� �Է¹ޱ�
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    //b ���� �Է¹ޱ�
    for (int i = 0; i < 10; i++) {
        cin >> b[i];
    }

    //2
    for (int i = 0; i < 10; i++) {
        if (a[i] > b[i]) awin++;
        else if (a[i] < b[i]) bwin++;
    }

    //3  
    if (awin == bwin) cout << "D\n";
    else if (awin > bwin) cout << "A\n";
    else cout << "B\n";

    return 0;
}