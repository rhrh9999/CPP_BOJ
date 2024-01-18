#include <iostream>
using namespace std;

/*
    1. n을 입력받는다.
    2. 첫줄부터 n번째 줄까지 별을 출력한다.
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
 
    for (int i = 0; i < n; i++) {
        int last = 2*n - 1;

        if (i == 0) {
            
        }
        else if (i == n - 1) 
            for (int j = 0; j < last; j++) {               
                cout << '*';
            }
    }

    return 0;
}