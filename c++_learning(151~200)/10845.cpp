#include <iostream>
#include <queue>

using namespace std;
/*
    1. n을 입력받는다.
    2. 각 명령에 따라 원하는 결과를 만든다.
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
    queue <int> q;

    while (n--) {
        string str;
        cin >> str;

        if (str == "push") {
            int num;
            cin >> num;
            q.push(num);
            //cout << q.front() << '\n';
        }
        else if (str == "pop") {
            if (q.empty())cout << "-1" << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }                
        }
        else if (str == "size") {
            cout << q.size() << '\n';
        } 
        else if (str == "empty") {
            if (q.empty()) cout << "1" << '\n';
            else cout << "0" << '\n';
        }
        //front() 와 back()도 cout처리 해줘야함
        else if (str == "front") {
            if (q.empty()) cout << "-1" << '\n';
            else cout << q.front() << '\n';
        }
        else if (str == "back") {
            if (q.empty()) cout << "-1" << '\n';
            else cout << q.back() << '\n';
        }
    }

    return 0;
}