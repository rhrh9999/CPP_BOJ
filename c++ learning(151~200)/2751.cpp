#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    벡터와 sort정렬 이용하자!!

    1. 수의 개수 n을 입력받는다.
    2. n개의 수를 입력받는다.
    3. 오름차순으로 정렬한다.
    4. 정렬한 결과를 출력한다.
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