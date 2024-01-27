#include <iostream>
using namespace std;

/*
    1. 게임횟수 n을 입력받는다.
    2. A의 점수와 B의 점수를 n번만큼 입력받는다.
    3. A와 B가 이긴 횟수를 각각 출력한다.
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