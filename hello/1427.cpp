#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    //1. �����ϰ��� �ϴ� �� n�� �Է¹޴´�.
    //2. ������������ �����Ѵ�. 
    //3. ������ ���� ����Ѵ�. 

    //1
    vector<int> v(100);
    for (int i = 0; i < 100; i++) {
        cin >> v[i];
    }
    //2
    sort(v.begin(), v.end(), greater<>());

    //3
    for (int i = 0; i < 100; i++) {
        cout << v[i] << " ";
    }

    return 0;
}