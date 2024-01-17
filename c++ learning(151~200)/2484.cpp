#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
    1. 참여자 수 n을 입력받는다.
    2. 각 사람이 던진 4개의 눈을 입력받는다.
    3. 각 사람별로 상금을 계산한다.
    4. 가장 높은 상금을 봅는다.
    5. 가장 높은 상금을 출력한다.
*/

int main() {
    //1
    int n;
    cin >> n;

    vector <int> win; //가장 큰 상금자 찾기
    
    int start = 0;

    //2
    while (n--) {
        vector <int> v(7,0); //주사위 수 카운팅할 벡터

        int a=0; //주사위 4번 던지기
        for (int i = 0; i < 4; i++) {
            cin >> a;
            v[a]++;
        }

        //3
        int reward = 0;
        for (int i = 1; i < 7; i++) {
            //3-1. 같은 수 4개 나옴
            if (v[i] == 4) {
                reward = 50000 + i * 5000;
                break;
            }
            //3-2. 같은 수 3개 나옴
            else if (v[i] == 3) {
                reward = 10000 + i * 1000;
                break;
            }
            //3-3. 2쌍이 1개 나온 경우
            else if (v[i] == 2) {
                        reward = 1000 + i * 100;
                        start = i;
                        break;                                
            }
            //3-4. 다 다른 경우
            else {
                if (v[i] == 1) {
                    reward = i * 100;
                    //break가 없어야 가장 끝에있는 큰 수로 reward계산됨
                }
            }

        }
        //3-5. 2쌍이 2개나온경우 따로 빼줌
        for (int j = start+1; j < 7; j++) {
            if (v[j] == 2) {
                reward = 2000 + start * 500 + j * 500;
                break;
            }
        }
        win.push_back(reward);
    }

    //4
    sort(win.rbegin(), win.rend());
    //5
    cout << win[0] << '\n';

    return 0;
}
