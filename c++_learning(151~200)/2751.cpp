#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    ���Ϳ� sort���� �̿�����!!

    1. ���� ���� n�� �Է¹޴´�.
    2. n���� ���� �Է¹޴´�.
    3. ������������ �����Ѵ�.
    4. ������ ����� ����Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
    vector <int> v(n);
    
    for (int i = 0; i < n; i++) {
       cin >> v[i];
    }
    
    //3
    sort(v.begin(), v.end());
    //v.erase(unique(v.begin(), v.end()), v.end());

    //4
    for (int i = 0; i < n; i++) {       
        cout << v[i] << '\n';
    }

    return 0;
}