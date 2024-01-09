#include <iostream>
using namespace std;
/*
    1. A의 카드 10개와 B의 카드 10개를 입력받는다.
    2. 각 게임의 승패를 확인한다.
    3. 최종 승리한 사람을 출력한다.
*/

int main() {
    //1
    int a[10], b[10];
    int awin = 0, bwin = 0;

    //a 점수 입력받기
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    //b 점수 입력받기
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