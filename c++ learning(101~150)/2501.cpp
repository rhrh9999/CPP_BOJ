#include <iostream>
#include <vector>
using namespace std;
/*
1. n과 k를 입력받는다.
2. n의 약수들을 구한다.
3. n의 약수들 중 k번째로 작은 수를 구한다.
4. 3을 출력한다. 
*/

int main() {
    //1
    int n, k;
    cin >> n >> k;

    //2
    int cnt = 0;
    for (int i = 1; i <= k; i++) {

        //n의 약수들 구하기
        if (n % i == 0) {
            cnt++;
            //3
            if (cnt == k) {
                cout << i << endl;
                break;
            }
            else if (cnt < k) {
                cout << "0" << endl;
                break;
            }

        }

    }

    return 0;
}