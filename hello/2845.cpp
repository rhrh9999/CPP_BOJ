#include <iostream>
using namespace std;

/*
    1. 사람의 수와 파티가 열렸던 곳의 넓이를 입력받는다.
    2. 각 기사에 실려있는 참가자의 수를 입력받는다.
    3. 각 사람 수의 차이를 출력한다.

*/
int main() {
    //1
    int l, p;
    cin >> l >> p;
    int real = l * p;

    //2
    int news = 0;
    for (int i = 0; i < 5; i++) {
        cin >> news;
        cout << news - real << " "; //3
    }

    return 0;
}