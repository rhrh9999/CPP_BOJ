#include <iostream>
#include <vector>
using namespace std;
/*
1. n�� k�� �Է¹޴´�.
2. n�� ������� ���Ѵ�.
3. n�� ����� �� k��°�� ���� ���� ���Ѵ�.
4. 3�� ����Ѵ�. 
*/

int main() {
    //1
    int n, k;
    cin >> n >> k;

    //2
    int cnt = 0;
    for (int i = 1; i <= k; i++) {

        //n�� ����� ���ϱ�
        if (n % i == 0) {
            cnt++;
            //3
            if (cnt == k) {
                cout << i << endl;
                break;
            }
            else if (cnt < k) {
                cout << "0" << endl;
                break;
            }

        }

    }

    return 0;
}