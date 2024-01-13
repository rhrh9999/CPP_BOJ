#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//자꾸 15프로에서 틀렸다고 나오는데 예제 넣은거는 맞음.. 어디가 틀림?

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

    //리워드 값 넣을 배열
    vector <int> v;

    //2
    while (n--) {
        int arr[7] = { 0, }; //주사위 수 카운팅하는 배열
        int reward = 0;

        //주사위 수 입력받아 카운팅하기
        int dice=0;
        for (int i = 0; i < 4; i++) { //주사위 4개 수 
            cin >> dice;
            arr[dice]++; //***          
        }

        //3       
        for (int i = 1; i < 7; i++) {
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
                //같은 눈이 한 쌍만 나옴
                reward = 1000 + i * 100;
                break;

                //같은 눈이 2개씩 2쌍 나옴
                for (int j = i + 1; j < 7; j++) {                  
                    if (arr[j] == 2) {
                        reward = 2000 + i * 500 + j * 500;
                        break;
                    }
                   
                }
            }
            //3-4. 가장 큰 눈이 나오는 경우
            //뒤에서부터 1인 애를 찾으면 바로 리워드로 계산
            else {
                for (int k = 6; k >= 1; k--) {
                    if (arr[k] == 1) reward = k * 100;      
                    break;
                }
            }         
        }       
        //리워드 배열에 넣기
        v.push_back(reward); 
      
    }
    //4
    sort(v.rbegin(), v.rend());
    cout << v[0];

    return 0;

}