#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //1. 수의 개수n을 입력받는다.
    //2. n개의 수를 입력받는다.
    //3. 수를 오름차순으로 정렬한다.
    //4. 정렬한 수를 출력한다. 

    //1
    int n;
    cin >> n;

    //2
    int num[1001] = { 0, };
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    //3
    sort(num, num + n);

    //4
    for (int i = 0; i < n; i++) {
        cout << num[i] << endl;
    }

    return 0;
}