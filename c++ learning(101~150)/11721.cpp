#include <iostream>
#include <string>
using namespace std;

int main() {
    //1. 단어를 입력받는다.
    //2. 열 개씩 끊는다.
    //3. 열 개씩 끊은 단위로 출력한다. 

    //1
    string str;
    cin >> str;

    //2
    int len = str.length();

    for (int i = 0; i<len; i ++) {
        cout << str[i];
        //3
        if (i % 10 == 9) cout << endl;
    }
    cout << endl;
    return 0;
}