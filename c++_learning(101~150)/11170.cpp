#include <iostream>
#include <string> //to_string을 이용하기 위해
using namespace std;

/*
1. 테스트케이스 수 t를 입력받는다.
2. n과 m을 입력받는다.
3. n과 m까지의 숫자 중 0의 개수를 센다.
4. 0의 개수를 출력한다.
*/

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n = 0, m = 0, cnt = 0;
        cin >> n >> m;
        //3
        for (int i = n; i <= m; i++) {
            string s = to_string(i);

            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '0') cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}