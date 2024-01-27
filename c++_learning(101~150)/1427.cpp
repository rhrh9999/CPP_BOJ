#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    //1. 정렬하고자 하는 수 n을 입력받는다.
    //2. 내림차순으로 정렬한다. 
    //3. 정렬한 수를 출력한다. 

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