#include <iostream>
#include <string> //to_string�� �̿��ϱ� ����
using namespace std;

/*
1. �׽�Ʈ���̽� �� t�� �Է¹޴´�.
2. n�� m�� �Է¹޴´�.
3. n�� m������ ���� �� 0�� ������ ����.
4. 0�� ������ ����Ѵ�.
*/

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n = 0, m = 0, cnt = 0;
        cin >> n >> m;
        //3
        for (int i = n; i <= m; i++) {
            string s = to_string(i);

            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '0') cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}