#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
    1. ������ �� n�� �Է¹޴´�.
    2. �� ����� ���� 4���� ���� �Է¹޴´�.
    3. �� ������� ����� ����Ѵ�.
    4. ���� ���� ����� ���´�.
    5. ���� ���� ����� ����Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;

    vector <int> win; //���� ū ����� ã��
    
    int start = 0;

    //2
    while (n--) {
        vector <int> v(7,0); //�ֻ��� �� ī������ ����

        int a=0; //�ֻ��� 4�� ������
        for (int i = 0; i < 4; i++) {
            cin >> a;
            v[a]++;
        }

        //3
        int reward = 0;
        for (int i = 1; i < 7; i++) {
            //3-1. ���� �� 4�� ����
            if (v[i] == 4) {
                reward = 50000 + i * 5000;
                break;
            }
            //3-2. ���� �� 3�� ����
            else if (v[i] == 3) {
                reward = 10000 + i * 1000;
                break;
            }
            //3-3. 2���� 1�� ���� ���
            else if (v[i] == 2) {
                        reward = 1000 + i * 100;
                        start = i;
                        break;                                
            }
            //3-4. �� �ٸ� ���
            else {
                if (v[i] == 1) {
                    reward = i * 100;
                    //break�� ����� ���� �����ִ� ū ���� reward����
                }
            }

        }
        //3-5. 2���� 2�����°�� ���� ����
        for (int j = start+1; j < 7; j++) {
            if (v[j] == 2) {
                reward = 2000 + start * 500 + j * 500;
                break;
            }
        }
        win.push_back(reward);
    }

    //4
    sort(win.rbegin(), win.rend());
    //5
    cout << win[0] << '\n';

    return 0;
}
