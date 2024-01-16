#include <iostream>
#include <string>
using namespace std;

/*
    1. 테스트케이스 개수 t를 입력받는다.
    2. 케이스 별 a와 b, 평문s를 입력받는다.
    3. 아핀 암호를 이용해 평문을 바꾼다.
    4. 바꾼 결과를 출력한다.
*/

int main() {
    //1
    int t;
    cin >> t;
    //2
    while (t--) {
        int a, b;
        string s;
        
        cin >> a >> b >> s;

        //3
        for (int i = 0; i < s.size(); i++) {
            //원래그대로의 문자열 숫자버전이 나와야함
            s[i] = ((a * (s[i] - 65) + b) % 26) + 65;
            cout << s[i]; //4
        }
        cout << endl;    
    }

    return 0;
}