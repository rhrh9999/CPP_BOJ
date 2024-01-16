#include <iostream>
using namespace std;

/*
    1. 두 정수 a,b를 입력받는다.
    2. 두 정수 사이에 있는 수들의 합을 구한다.
    3. 합을 출력한다. 
*/

int main() {
    //1
    long long a, b;
    cin >> a >> b;

    //2 
    if (a <= b)
        cout << ((b - a + 1) * (a + b) / 2);
    else //b가 더 작은 경우
        cout << ((a - b+ 1) * (a + b) / 2);

    return 0;
}