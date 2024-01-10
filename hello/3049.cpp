#include <iostream>
using namespace std;

/*
    1. n을 입력받는다.
    2. 교차점의 개수를 계산한다.
    3. 교차점의 개수를 출력한다.

*/
int main() {
    //1
    int n;
    cin >> n;

    //2
    int cross = (n * (n - 1) * (n - 2) * (n - 3)) / 24;

    //3
    cout << cross;

    return 0;
}