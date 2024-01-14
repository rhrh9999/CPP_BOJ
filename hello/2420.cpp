#include <iostream>
#include <stdlib.h> //절댓값 abs함수 
using namespace std;

/*
    1. 두 도메인의 유명도를 입력받는다.
    2. 두 유명도의 차이를 구한다.
    3. 차이를 출력한다.
*/

int main() {
    //1
    long n, m; //범위 int로 하면 에러
    cin >> n >> m;

    //2
    cout <<abs(n - m);

    return 0;
}