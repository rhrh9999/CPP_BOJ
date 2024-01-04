#include <iostream>
#include <algorithm>
using namespace std;

/*
1. 테스트케이스 개수 t를 입력받는다.
2. 각 케이스별로 다섯 개의 정수를 입력받는다.
3. 각 케이스별로 총점을 계산한다. 
점수 조정이 필요한 경우는 KIN을 출력한다.
4. 각 총점들을 출력한다.
*/


int main() {
    int t;
    cin >> t;

    while (t--) {
        int num[5] = { 0, };
        string res;
        for (int i = 0; i < 5; i++) {
            cin >> num[i];
        }
        sort(num, num + 5);

        //3
        if (num[3] - num[1] >= 4)
            cout << "KIN" << endl;
        else
            cout << num[1] + num[2] + num[3] << endl;
          
    }
    return 0;
}