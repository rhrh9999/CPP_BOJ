#include <iostream>
#include <string> //getline함수 쓰기위해
using namespace std;

/*
    1. 각 줄을 입력받는다.
    2. 각 줄의 결과가 true인지 false인지 확인한다.
    3. true false 값을 출력한다.
*/

int main() {
    //1
    int a, b;
    string oper;
    bool check;

    //2
    string res;
    int cnt = 1;

    while (1) {   
        cin >> a >> oper >> b;

        if (oper == "E") break;

        //2-1
        if (oper == ">")  check = (a > b);
        //2-2
        else if (oper == ">=") check = (a >= b);
        //2-3
        else if (oper == "<") check = (a < b); 
        //2-4
        else if (oper == "<=") check = (a <= b);       
        //2-5
        else if (oper == "==")  check = (a == b);        
        //2-6
        else if (oper == "!=")  check = (a != b);        

        //check값 확인해서 true,false 분류하기
        if (check == 1) res = "true";
        else res = "false";

        //3
        cout << "Case " << cnt << ": " << res << endl;
        cnt++;
    }

    return 0;
}