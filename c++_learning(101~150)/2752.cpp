#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //1. 세 개의 수를 입력받는다.
    //2. 세 수를 오름차순으로 정렬한다.
    //3. 정렬한 수를 출력한다.

    //1
    int num[3] = { 0, };
    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }

    //2
    sort(num, num + 3);

    //3
    for (int i = 0; i < 3; i++) {
        cout << num[i] << ' ';
    }

    return 0;

}