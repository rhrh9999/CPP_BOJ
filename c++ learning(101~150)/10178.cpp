#include <iostream>
using namespace std;

/*
1. �׽�Ʈ���̽��� ���� �Է¹޴´�.
2. �� �׽�Ʈ���̽��� ������ ����c �� ������ ��v�� �Է¹޴´�.
3. ������Ŀ� ���� ����Ѵ�.
*/

int main() {
    //1
    int t;
    cin >> t;

    //2
    while (t--) {
        int c = 0, v = 0;
        cin >> c >> v;

        int child = c / v;
        int dad = c % v;
        cout << "You get " << child << " piece(s) and your dad gets " << dad << " piece(s)." << endl;
    }

    return 0;
}