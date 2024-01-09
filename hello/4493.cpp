#include <iostream>
using namespace std;

/*
    1. 테스트케이스의 개수 t를 입력받는다.
    2. 각 테스트케이스의 가위바위보 횟수n을 입력받는다.
    3. 각 테스트케이스별로 R P S를 입력받는다.
    4. 각 테스트케이스의 승자를 찾는다.
    5. 승자를 출력한다.
*/

int main() {
    //1
    int t;
    cin >> t; 

    //2
    while (t--) {
        int n;
        cin >> n;

        //3
        int p1win=0, p2win=0, same=0;

        for (int i = 0; i < n; i++) {
            char p1, p2;
            cin >> p1 >> p2;

            //p1과 p2가 같은 것을 낸 경우(비긴경우)
            if (p1 == p2) same++;
            //p1이 이기는 경우 3가지
            else if (p1 == 'R' && p2 == 'S') p1win++;
            else if (p1 == 'P' && p2 == 'R') p1win++;
            else if (p1 == 'S' && p2 == 'P') p1win++;
            //남은 케이스는 p2가 이기는 경우 3가지
            else p2win++;
        }
            //4 
            if (p1win > p2win) cout << "Player 1\n";
            else if (p1win < p2win) cout << "Player 2\n";
            else cout << "TIE\n";
    }
}