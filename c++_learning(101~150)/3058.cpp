#include <iostream>
using namespace std;
int main() {
    //1. �׽�Ʈ���̽� t�� �Է¹޴´�.
    //2. �� �׽�Ʈ���̽����� 7���� �ڿ����� �Է¹޴´�.
    //3. �� ���̽� �߿� ¦���� ã�´�.
    //4. ¦�� �� �ּڰ��� ã�´�.
    //5. ¦���� �հ� �ּڰ��� ����Ѵ�. 

    //1
    int t;
    cin >> t;

    //2
    int i = 0;
    while(i<t) {
        int num[7] = { 0, };
        int sum = 0, min = 100;
        for (int j = 0; j < 7; j++) {
            cin >> num[i];

            if (num[i] % 2 == 0) { //3
                sum += num[i];

                if (min > num[i]) { //4
                    min = num[i];
                }
            }
        }
    //5
        cout << sum << ' ' << min << endl;
        i++;
    }
        return 0;
    }