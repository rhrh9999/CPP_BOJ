#include <iostream>
#include <queue>

using namespace std;
/*
    1. n�� �Է¹޴´�.
    2. �� ��ɿ� ���� ���ϴ� ����� �����.
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
        //front() �� back()�� coutó�� �������
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