#include <iostream>
using namespace std;

/*
    1. T를 입력받는다.
    2. T만큼 테스트 데이터S를 입력받는다.
    3. 각 문자열에서 등장하지 않는 알파벳 대문자를 찾는다.
    4. 등장하지 않는 알파벳 대문자의 합을 찾는다.
    5. 그 합을 출력한다.
*/

int main() {
    //1
    int t;
    cin >> t;

    // 2
    while(t--) {
        string s;
        cin >> s;

        //알파벳 대문자 배열arr 생성 
        int arr[26] = { 0, };
        int cnt = 0;

        //3
        for (int i = 0; i < s.size(); i++) {
             cnt= s[i] - 65;
             arr[cnt]++;
        }

        //4
        int sum = 0; 
        for (int j = 0; j < 26; j++) {
            if (arr[j] == 0) {
                sum += j + 65;
            }
        }

        //5
        cout << sum << endl;
    }
    return 0;
}