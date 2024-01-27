#include <iostream>
using namespace std;

/*
    1. 단어를 입력받는다.
    2. 단어에서 CAMBRIDGE에 포함된 알파벳들을 지운다.
    3. 지운 단어를 출력한다.
*/

int main() {
    //1
    string word;
    cin >> word;

    //2
    string cam = "CAMBRIDGE"; 
    for (int i = 0; i < word.size(); i++) {
        for (int j = 0; j < cam.size(); j++) {
            if (word[i] == cam[j]) word[i] = 0;
        }
    }

    //3
    for (int i = 0; i < word.size(); i++) {
        if (word[i] != 0) cout << word[i];
    }
    return 0;
}