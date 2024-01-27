#include <iostream>
#include <string>
using namespace std;
/*
    1. n m을 입력받음
    2. n을 n번 붙인 문자열을 만든다.
    3. 2번과 m의 길이를 비교해서 출력함
*/
int main() {
    //1
    int n, m;
    cin >> n >> m;

    //2
    string s;
    for (int i = 0; i < n; i++) {
        //s += n; 이렇게하면 안됨
        s += to_string(n);
        
    }
    //3
    if (s.length() > m) {
        cout << s.substr(0, m) << '\n';
    }
    else {
        cout << s << '\n';
    }
    return 0;
}