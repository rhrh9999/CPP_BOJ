#include <iostream>
#include <string>
using namespace std;

/*
    ���ڿ� string 
    1. ���ڿ� �Է¹ޱ�
    2. JOI�� IOI�� ���� ����
    3. �� ���� ����ϱ�
*/

int main() {
    //1
    string s;
    cin >> s;

    //2
    int len = s.size();
    int jcnt = 0, icnt = 0;

    for (int i = 0; i < len-2; i++) {
        if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I') jcnt++;
        else if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') icnt++;
    }

    cout << jcnt << '\n' << icnt;

    return 0;
}