#include <iostream>
using namespace std;

/*
    1. 게임횟수 n을 입력받는다.
    2. A의 점수와 B의 점수를 n번만큼 입력받는다.
    3. A와 B가 이긴 횟수를 각각 출력한다.
*/

//A와 B 중 이긴 사람 찾는 함수 정의
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