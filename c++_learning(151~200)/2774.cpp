#include <iostream>
#include <vector>
using namespace std;

/*
    1. 테스트케이스의 개수 t를 입력받는다.
    2. 수x를 입력받는다.
    3. 각 수의 아름다운 정도를 찾는다.
    4. 아름다운 정도를 출력한다.

*/

int main() {
    //1
    int t;
    cin >> t;

    //2
    while (t--) {
     int arr[10] = { 0, }; //카운팅 배열
     int cnt = 0;

     string s;
     cin >> s;

     //지금 string으로 입력받은 숫자는 '문자'임
     //아스키코드라는 뜻
     //1=(int)49, 2=(int)50 ... 그러니 동일하게 해주려면 48을 빼줘야함
     for (int i = 0; i < s.size(); i++) {       
         arr[s[i] - 48]++;
     }

     //4
     for (int i = 0; i < 10; i++) {
            if (arr[i] != 0) cnt++; //한번은 나온 수들 카운팅
     }
        cout << cnt << endl;
    }
    return 0; 
}