#include <iostream>
#include <algorithm>
using namespace std;
//깃 푸쉬 테스트 in 1037.cpp

int main() {

    //1. n의 진짜 약수 개수를 입력받는다.
    //2. n의 진짜 약수들을 입력받는다. 
    //3. n을 찾는다.
    //4. n을 출력한다.

    //1
    int realnum = 0;
    cin >> realnum;

    //2
    int num[100] = { 0, };
    for (int i = 0; i < realnum; i++) {
        cin >> num[i];
    }

    //약수들 오름차순으로 정렬
    sort(num, num + realnum);

    //3
    int n = 0;
    n = num[0] * num[realnum - 1];

    //4
    cout << n;
    return 0;
}