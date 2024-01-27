#include <iostream>
using namespace std;

/*
    1. 정수 n을 입력받는다.
    2. 목록 수를 입력받는다. 이때 0이면 목록은 끝.
    3. 각 목록 수가 n의 배수인지 판단한다.
    4. 예제 출력형식에 맞춰 출력한다.
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
    
    while (1) {
        int num;
        cin >> num;
        if (num == 0) break;
        //3,4
        if (num % n == 0) cout << num << " is a multiple of " << n << "." << endl;
        else cout << num << " is NOT a multiple of " << n << "." << endl;
    }

    return 0;
}