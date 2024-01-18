#include <iostream>
#include <stack>
using namespace std;
/*
    1. n을 입력받는다.
    2. n만큼 명령을 입력받는다..
    3. 각 명령마다 출력을 한다.
*/

int main() {
    //1
    int n;
    cin >> n;
    //2
    stack <int> s;
    string str; //명령어 받을 변수
    //3
    while (n--) {
        cin >> str;
        if (str == "push") {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (str == "pop") {
            if (s.empty()) cout << "-1" << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if (str == "size") {
            cout << s.size() << '\n';
        }
        else if (str == "empty") {
            if (s.empty()) cout << "1" << '\n';
            else cout << "0" << '\n';
        } 
        else if (str == "top") {
            if (s.empty()) cout << "-1" << '\n';
            else cout << s.top() << '\n';
        }
    }
    return 0;
}