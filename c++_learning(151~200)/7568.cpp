#include <iostream>
#include <vector>
using namespace std;

/*
    pair 벡터를 활용

    1. 전체 사람의 수 n을 입력받는다.
    2. 각 사람의 몸무게와 키를 x,y 를 입력받는다.
    3. 각 사람의 덩치 등수를 구해서 출력한다.
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
    vector <pair<int, int>> v;
    int x, y;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }

    //3
    //몸무게와 키가 모두 커야 승리
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = 0; j < n; j++) {
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}