#include <iostream>
using namespace std;

/*
    1. ����Ƚ�� n�� �Է¹޴´�.
    2. A�� ������ B�� ������ n����ŭ �Է¹޴´�.
    3. A�� B�� �̱� Ƚ���� ���� ����Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;
    
    int awin = 0, bwin = 0;

    //2
    while (n--) {
        int a, b;     
        cin >> a >> b;
        if (a > b) awin++;
        else if (a < b) bwin++;
    }

    //3
    cout << awin << ' ' << bwin;
    
    return 0;
}