#include <iostream>
#include <vector>
using namespace std;
/*
그리디 알고리즘
1. 동전종류n와 만들어야하는 수k 를 입력받는다
2. 동전의 가치를 입력받는다
3. k원을 최소한의 동전으로 구현한다
4. 동전개수를 출력한다.
*/
int main() {
    //1
    int n, k;
    cin >> n >> k;

    //2
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    //3
    int coin = 0;
    for (int j = n - 1; j >= 0; j--) {        
            coin += (k / v[j]);
            k = k % v[j];        
        if (k == 0) {
            //cout << "Coin개수: " << coin << '\n';
            break;
        }        
    }
    cout << coin << '\n';
    return 0;
}