#include <iostream>
#include <string> //getline함수 이용
using namespace std;

/*
    1. 문자열 n개를 입력받는다.
    2. 각 문자열에서 소문자, 대문자, 숫자, 공백의 개수를 찾는다.
    3. 찾은 네 가지 개수를 출력한다.
*/

int main() {
    //1
    string str;
    while (getline(cin, str)) {

        //2
        int small = 0, big = 0, num = 0, gap = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 65 && str[i] <= 90) big++;
            else if (str[i] >= 97 && str[i] <= 122) small++;
            else if (isdigit(str[i]) != 0) num++;
            //else if(str[i]>='0' && str[i]<='9') num++;
            else if (str[i] == ' ') gap++;
        }

        //3
        cout << small << ' ' << big << ' ' << num << ' ' << gap << endl;
    }
    return 0;
}