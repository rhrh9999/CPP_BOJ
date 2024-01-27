#include <iostream>
#include <string>
using namespace std;
/*
    1. 줄의 수 n을 입력받는다.
    2. 각 줄마다 문장을 입력받는다.
    3. 문장마다 줄 번호를 추가한다.
    4. 줄 번호가 추가된 문장을 출력한다.
*/

int main() {
    //1
    int n;
    cin >> n;
    cin.ignore(); //표준입력버퍼에 개행문자(\n)를 지워주는 역할
    //ignore()을 안 쓰면 이 코드에서 n만 입력되고 str을 입력받지 않았는데
    //1. 만 출력되는 현상이 발생함.

    //2
   for(int i=1; i<=n; i++){
        string str;
        getline(cin, str);

        //3,4
        cout << i << ". " << str << endl;

   } 
    return 0;
}