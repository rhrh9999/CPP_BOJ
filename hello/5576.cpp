#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
1. ���� 20���� �Է¹޴´�.
2. �� ���к� ������ ã�´�.
3. 2���� ���
*/

//���� �Է¹ް� ����ã�� �����ϴ� �Լ�
void score(vector <int> v) {
    //���� �Է¹ޱ�
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<>());
    cout << v[0] + v[1] + v[2];
}

int main() {
    //1
    vector<int> w(10);
    vector<int> k(10);

    //2
    score(w);
    cout << ' ';
    score(k);

    return 0;
}