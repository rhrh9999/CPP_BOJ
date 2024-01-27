#include <iostream>
using namespace std;

/*
    1. 테스트케이스의 개수 t를 입력받는다.
    2. 각 테스트케이스 별 거스름돈을 입력받는다. 
    3. 각 케이스별로 필요한 쿼터, 다임, 니켈, 페니의 수를 구한다.
    4. 위 동전들의 수를 출력한다.

*/

void change(int c) {
    //쿼터 25
    cout << c / 25 << " ";
    c %= 25;

    //다임 10
    cout << c / 10 << " ";
    c %= 10;

    //니켈
    cout << c / 5 << " ";
    c %= 5;

    //페니
    cout << c / 1 << endl;
}

int main() {
    //1
    int t;
    cin >> t;

    //2
    while (t--) {
        int c;
        cin >> c;

        //3 함수로 계산
        change(c);
    }

    return 0;
}