#include <iostream>
using namespace std;

/*
    1. ����Ƚ�� n�� �Է¹޴´�.
    2. A�� ������ B�� ������ n����ŭ �Է¹޴´�.
    3. A�� B�� �̱� Ƚ���� ���� ����Ѵ�.
*/

//A�� B �� �̱� ��� ã�� �Լ� ����
void whowin(int n) {
    int awin = 0, bwin = 0;

    while (n--) {
        int a, b;
        cin >> a >> b;
        if (a > b) awin++;
        else if (a < b) bwin++;
    }

    //3
    cout << awin << ' ' << bwin;

}

int main() {
    //1
    int n;
    cin >> n;

    //2
    whowin(n);

    return 0;
}