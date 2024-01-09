#include <iostream>
using namespace std;

/*
    1.월과 일을 입력받는다.
    2. 2월 18일 이전,이후,해당일인지 판단한다.
    3. 각 케이스별 출력을 한다.
*/

int main() {
    //1
    int mon, day;
    cin >> mon >> day;

    //2,3
    switch (mon)
    {
    case 1:
        cout << "Before\n";
        break;
    case 2:
        if (day==18) {
            cout << "Special\n";
            break;
        }
        else if (day < 18) {
            cout << "Before\n";
            break;
        }
        else {
            cout << "After\n";
            break;
        }
    default:
        cout << "After\n";
        break;
    }

    return 0;
}