#include <iostream>
using namespace std;
int main() {
    //1. 테스트케이스 t를 입력받는다.
    //2. 각 테스트케이스별로 7개의 자연수를 입력받는다.
    //3. 각 케이스 중에 짝수를 찾는다.
    //4. 짝수 중 최솟값을 찾는다.
    //5. 짝수의 합과 최솟값을 출력한다. 

    //1
    int t;
    cin >> t;

    //2
    int i = 0;
    while(i<t) {
        int num[7] = { 0, };
        int sum = 0, min = 100;
        for (int j = 0; j < 7; j++) {
            cin >> num[i];

            if (num[i] % 2 == 0) { //3
                sum += num[i];

                if (min > num[i]) { //4
                    min = num[i];
                }
            }
        }
    //5
        cout << sum << ' ' << min << endl;
        i++;
    }
        return 0;
    }