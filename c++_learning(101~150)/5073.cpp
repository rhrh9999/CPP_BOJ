#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //sort함수를 이용하여 세 변의 길이를 오름차순 정렬
    //sort함수를 사용하기 위해 algorithm 헤더 선언

    //1. 삼각형의 세 변의 길이를 입력받는다.
    //2. 각 케이스별로 분류한다. 
    //3. 케이스별 결과를 출력한다. 

    //1
    while (1) {
        int side[3] = { 0, };
        for (int i = 0; i < 3; i++) {
            cin >> side[i];
        }

        //0 0 0을 입력받은 경우 반복문 탈출
        if (side[0] == 0 && side[1] == 0 && side[2] == 0) break; // 0 0 0을 입력받은 경우 반복문 탈출

        //가장 긴 변 찾기
        sort(side, side + 3);

        //2
        string out;
        if (side[0] + side[1] <= side[2]) out = "Invalid"; //가장 긴 변의 길이보다 나머지 두 변의 길이의 합이 길지 않은 경우
        else if(side[0]==side[1] && side[1]==side[2] && side[0]==side[2])
        //else if (side[0] == side[1] == side[2])
            out = "Equilateral";
        else if (side[0] == side[1] || side[1] == side[2] || side[0] == side[2])
            out = "Isosceles";
        else out = "Scalene";

        //3
        cout << out << endl;

    }
    return 0;
}