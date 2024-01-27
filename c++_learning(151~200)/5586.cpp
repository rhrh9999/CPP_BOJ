#include <iostream>
#include <string>
using namespace std;

/*
    문자열 string 
    1. 문자열 입력받기
    2. JOI와 IOI의 개수 세기
    3. 각 개수 출력하기
*/

int main() {
    //1
    string s;
    cin >> s;

    //2
    int len = s.size();
    int jcnt = 0, icnt = 0;

    for (int i = 0; i < len-2; i++) {
        if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I') jcnt++;
        else if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') icnt++;
    }

    cout << jcnt << '\n' << icnt;

    return 0;
}