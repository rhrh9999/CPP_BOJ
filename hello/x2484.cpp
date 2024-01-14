#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//자꾸 15프로에서 틀렸다고 나오는데 예제 넣은거는 맞음.. 어디가 틀림?
//이제는 34프로에서 틀렸다고 나온다.. ㅠ하

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

    vector <int> v; //리워드 값 넣을 배열

    //2
    while (n--) {
        int arr[7] = { 0, }; //주사위 수 카운팅하는 배열
        int reward = 0;

        int twocnt = 0; //같은 눈이 2쌍인지 1쌍인지 판별
        int twoarr[2] = { 0, }; //위 케이스에 쓸 변수들 (리워드 구할때)
        int tw = 0;

        int onecnt = 0;
        int onearr[4] = { 0, };
        int on = 0;

        //주사위 수 입력받아 카운팅하기
        int dice = 0;
        for (int i = 0; i < 4; i++) { //주사위 4개 수 
            cin >> dice;
            arr[dice]++; //***          
        }

        //3       
        for (int i = 1; i < 7; i++) { //i가 1~6까지 반복 
            //3-1. 같은 눈이 4개
            if (arr[i] == 4) {
                reward = 50000 + i * 5000;
                break;
            }
            //3-2. 같은 눈이 3개
            else if (arr[i] == 3) {
                reward = 10000 + i * 1000;
                break;
            }
            //3-3. 같은 눈이 2개씩 2쌍이 나온 경우와 1쌍만 나온 경우 처리
            else if (arr[i] == 2)
            {
                twocnt++;
                //cout << "i의 값(2개 나온 값): " << i << endl;
                twoarr[tw] = i;
                //cout << "twoarr배열: " << twoarr[tw] << endl;
                tw++;

                //같은 눈이 한 쌍만 나옴
                if (twocnt == 1) {
                    reward = 1000 + twoarr[0] * 100;

                }
                //같은 눈이 2개씩 2쌍 나옴
                else if (twocnt == 2) {
                    reward = 2000 + twoarr[0] * 500 + twoarr[1] * 500;
                    break;
                }
            }
            //3-4.모두 다른 눈이 나오는 경우
            //뒤에서부터 1인 애를 찾으면 바로 리워드로 계산
            else if (arr[i] == 1) {
                onecnt++;
                //cout << "i의 값(1개 나온 값): " << i << endl;
                onearr[on] = i;
                //cout << "onearr배열: " << onearr[on] << endl;
                on++;

                //cout << "onearr배열의 마지막 " << onearr[3] << endl;
                //드디어 마지막 arr[3]에 값이 들어옴 
            }
            reward = 1000 + onearr[3] * 100;


        }
        //cout << "상금은 " << reward << endl;
        //리워드 배열에 넣기
        v.push_back(reward);
    }


    //4
    sort(v.rbegin(), v.rend());
    /*for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }*/
    cout << v[0];

    return 0;
}

