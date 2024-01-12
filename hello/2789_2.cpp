#include <iostream>
using namespace std;

/*
    1. 단어를 입력받는다.
    2. 단어에서 CAMBRIDGE에 포함된 알파벳들을 지운다.
    3. 지운 단어를 출력한다.
*/

//캠브릿지 문자와 동일한지 확인하는 함수
int cambridge(char ch) {
    return ((ch >= 'A' && ch <= 'E') || ch == 'G' || ch == 'I' || ch == 'M' || ch == 'R');
}


int main() {
    //1
    string word;
    cin >> word;

    //2
    for (int i = 0; i < word.size(); i++) {
        if (!cambridge(word[i])) cout << word[i]; //3
    }
    
    return 0;
}