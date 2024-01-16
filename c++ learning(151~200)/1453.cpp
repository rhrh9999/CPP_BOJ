#include <iostream>
using namespace std;

/*
    1. 손님수n을 입력받는다.
    2. 각 손님이 앉고싶어하는 자리를 입력받는다.
    3. 거절당하는 손님 수를 카운트한다.
    4. 거절당한 손님 수를 출력한다.
*/

int main() {
    //1
    int n;
    cin >> n;
    //2
    int seat[101] = { 0, };
    int sorry = 0; //거절 
    int guest;
    //3
    while (n--) {
        cin >> guest;
        seat[guest]++; //seat[guest]=1
        if (seat[guest] > 1) //다음 손님이 같은 자리를 요구할때 거절..
            sorry++;
    }
    //4
    cout << sorry;
    return 0;
}