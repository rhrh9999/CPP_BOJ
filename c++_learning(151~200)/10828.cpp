#include <iostream>
#include <stack>
using namespace std;
/*
    1. n�� �Է¹޴´�.
    2. n��ŭ ����� �Է¹޴´�..
    3. �� ��ɸ��� ����� �Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;
    //2
    stack <int> s;
    string str; //��ɾ� ���� ����
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