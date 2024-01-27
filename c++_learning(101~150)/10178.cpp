#include <iostream>
using namespace std;

/*
1. 테스트케이스의 수를 입력받는다.
2. 각 테스트케이스의 사탕의 개수c 와 형제의 수v를 입력받는다.
3. 출력형식에 맞춰 출력한다.
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