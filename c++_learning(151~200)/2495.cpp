#include <iostream>
#include <vector>
using namespace std;

/*
    1. 세 개의 여덟자리 양의 정수를 입력받는다.
    2. 각 수에서 연속된 숫자의 길이를 구한다.
    3. 가장 긴 연속된 숫자길이를 출력한다.
*/

int main() {
    //1
    string num;
    for (int i = 0; i < 3; i++) {
        int cnt = 1, max = 1;
        cin >> num;
        //2
        for (int j = 0; j < 7; j++) {
            if (num[j] == num[j + 1]) {
                cnt++;
                if (max < cnt) max = cnt;
            }
            else cnt = 1;           
        }
        //3
        cout << max << '\n';
    }
    return 0;
}