#include <iostream>
using namespace std;

/* 함수ver
    1. 단어를 입력받는다.
    2. 카이사르 단어를 원래 단어로 고친다.
    3. 고친 단어를 출력한다.
*/

void findword(string word) {
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= 68 && word[i] <= 90) word[i] = word[i] - 3;
        else word[i] = word[i] + 23;
        cout << word[i]; //3
    }
}

int main() {
    //1
    string word;
    cin >> word;

    //2
    findword(word);

    return 0;
}