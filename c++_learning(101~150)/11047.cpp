#include <iostream>
#include <vector>
using namespace std;
/*
�׸��� �˰���
1. ��������n�� �������ϴ� ��k �� �Է¹޴´�
2. ������ ��ġ�� �Է¹޴´�
3. k���� �ּ����� �������� �����Ѵ�
4. ���������� ����Ѵ�.
*/
int main() {
    //1
    int n, k;
    cin >> n >> k;

    //2
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    //3
    int coin = 0;
    for (int j = n - 1; j >= 0; j--) {        
            coin += (k / v[j]);
            k = k % v[j];        
        if (k == 0) {
            //cout << "Coin����: " << coin << '\n';
            break;
        }        
    }
    cout << coin << '\n';
    return 0;
}