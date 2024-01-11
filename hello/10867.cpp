#include <iostream>
#include <vector> 
#include <algorithm> //sort함수
using namespace std;

/*
    1. 수의 개수n을 입력받는다.
    2. 숫자를 입력받는다.
    3. 중복을 제외하고 오름차순으로 정렬한다.
    4. 정렬된 결과를 출력한다.

*/
int main() {
    //1
    int n;
    cin >> n;

    //2
    vector <int> v(n); //벡터 선언 (배열의 경우 arr[n]이 되지 않지만(n을 입력받아 넣는것) 벡터는 가능)
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    //3
    sort(v.begin(), v.end()); //오름차순 정렬
    v.erase(unique(v.begin(), v.end()), v.end());
    //원소를 삭제하는 erase함수 unique(v.begin(), v.end()) ~ v.end() 사이에 중복된 원소들을 삭제
    //unique함수는 중복되지 않은 원소들을 앞에서부터 채움(중복된 애들은 그대로 뒤에 쌓임)

    //4
    for (int j = 0; j < v.size(); j++) {
        cout << v[j] << ' ';
    }

    return 0;
}