#include <iostream>
#include <string>
#include <algorithm> //reverse함수
using namespace std;
/*
1. x y 입력받음
2. x y -> rev처리
3. rev(x)+rev(y) 구하기
4. 3번 다시 rev처리
*/

//rev함수
int rev(int num) {
    string s=to_string(num);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main() {
    //1
    int x, y;
    cin >> x >> y;

    //2
    cout << rev(rev(x) + rev(y));

    return 0;
}