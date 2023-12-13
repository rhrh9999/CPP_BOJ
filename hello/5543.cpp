#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //1. 다섯 줄에 버거와 음료 가격을 입력받는다.
    //2. 가장 싼 세트 메뉴를 찾는다.
    //3. 가장 싼 세트 메뉴의 가격을 출력한다.

    //1
    int burger[3] = { 0, };
    int drink[2] = { 0, };
    //햄버거 가격 입력받기
    for (int i = 0; i < 3; i++) {
        cin >> burger[i];
    }
    //음료 가격 입력받기
    for (int j = 0; j < 2; j++) {
        cin >> drink[j];
    }

    //2 
    sort(burger, burger + 3);
    sort(drink, drink + 2);

    int cheap = 0;
    cheap = burger[0] + drink[0] - 50;

    //3
    cout << cheap;

    return 0;
}