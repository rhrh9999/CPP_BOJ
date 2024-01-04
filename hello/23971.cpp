#include <iostream>
#include <cmath> //ceil함수를 이용하기 위함
using namespace std;

/*
1. h w n m을 입력받는다. (h w는 강의실 테이블, n m은 떨어져야하는 거리)
2. 강의실이 수용할 수 있는 최대 인원을 구한다.
3. 2번을 출력한다.
*/

int main() {
    
    //1
    double h, w, n, m; 
    cin >> h >> w >> n >> m;

    //2
    //h와 w를 2차원 배열에 넣으려고 했으나 미지수라 안됨
    //ceil 함수를 이용해보자

    double row = 0, column = 0;
    row = (long)ceil(h / (n + 1));
    column = (long)ceil(w / (m + 1));

    int sum = row * column;
    cout << sum << endl;
    return 0; 
}