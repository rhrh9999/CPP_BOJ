#include <iostream>
#include <deque>
using namespace std;
/*
    1. n을 입력받는다.
    2. n개의 명령에 따라 출력한다.
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
    deque <int> dq;
    string s; //명령어 받을 s
    while (n--) {
        cin >> s;
        int num; //push_front와 push_back할 때 쓸 정수
        
        if (s == "push_front") {            
            cin >> num;
            dq.push_front(num);
        }
        else if (s == "push_back") {
            cin >> num;
            dq.push_back(num);
        }

        else if (s == "pop_front") {
            if (dq.empty()) cout << "-1" << '\n';
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (s == "pop_back") {
            if (dq.empty()) cout << "-1" << '\n';
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }

        else if (s == "size") {
            cout << dq.size() << '\n';
        }
        else if (s == "empty") {
            if (dq.empty()) cout << "1" << '\n';
            else cout << "0" << '\n';
        }

        else if (s == "front") {
            if (dq.empty()) cout << "-1" << '\n';
            else cout << dq.front() << '\n';
        }
        else if (s == "back") {
            if (dq.empty()) cout << "-1" << '\n';
            else cout << dq.back() << '\n';
        }
    }

    return 0;
}