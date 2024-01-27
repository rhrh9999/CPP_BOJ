#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
1. 점수 20개를 입력받는다.
2. 각 대학별 득점을 찾는다.
3. 2번을 출력
*/

//점수 입력받고 득점찾아 리턴하는 함수
void score(vector <int> v) {
    //점수 입력받기
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