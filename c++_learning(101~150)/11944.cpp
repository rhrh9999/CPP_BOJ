#include <iostream>
#include <string>
using namespace std;
/*
    1. n m�� �Է¹���
    2. n�� n�� ���� ���ڿ��� �����.
    3. 2���� m�� ���̸� ���ؼ� �����
*/
int main() {
    //1
    int n, m;
    cin >> n >> m;

    //2
    string s;
    for (int i = 0; i < n; i++) {
        //s += n; �̷����ϸ� �ȵ�
        s += to_string(n);
        
    }
    //3
    if (s.length() > m) {
        cout << s.substr(0, m) << '\n';
    }
    else {
        cout << s << '\n';
    }
    return 0;
}