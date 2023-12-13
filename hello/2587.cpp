#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //1. 다섯 개의 자연수를 입력받는다.
    //2. 평균과 중앙값을 구한다.
    //3. 평균과 중앙값을 출력한다.

    //1
    int num[5] = { 0, }, sum = 0; 
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        sum += num[i];
    }

    //2
    int aver = 0, mid = 0; 
    //평균 구하기
    aver = sum / 5;
    //중앙값 구하기
    sort(num, num + 5);
    mid = num[2];

    //3
    cout << aver << endl << mid;
    
    return 0;
}