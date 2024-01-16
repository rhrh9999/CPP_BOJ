#include <iostream>
using namespace std;
/*
    1. 동혁이가 찾은 각 피스의 개수를 입력받는다. 
    2. 원래 피스개수와의 차이를 구한다.
    3. 그 차이를 출력한다.
*/

int main() {
    //1
    int ori[6] = { 1,1,2,2,2,8 };
    int real[6] = { 0, };
    //2.3
    for (int i = 0; i < 6; i++) {
        cin >> real[i];
        cout << ori[i] - real[i] << " ";
    }

    return 0;
}