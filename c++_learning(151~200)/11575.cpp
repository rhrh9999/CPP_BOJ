#include <iostream>
#include <string>
using namespace std;

/*
    1. �׽�Ʈ���̽� ���� t�� �Է¹޴´�.
    2. ���̽� �� a�� b, ��s�� �Է¹޴´�.
    3. ���� ��ȣ�� �̿��� ���� �ٲ۴�.
    4. �ٲ� ����� ����Ѵ�.
*/

int main() {
    //1
    int t;
    cin >> t;
    //2
    while (t--) {
        int a, b;
        string s;
        
        cin >> a >> b >> s;

        //3
        for (int i = 0; i < s.size(); i++) {
            //�����״���� ���ڿ� ���ڹ����� ���;���
            s[i] = ((a * (s[i] - 65) + b) % 26) + 65;
            cout << s[i]; //4
        }
        cout << endl;    
    }

    return 0;
}