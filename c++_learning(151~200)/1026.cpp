#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
    sort정렬을 이용하자
    1. n을 입력받는다.
    2. A의 숫자들, B의 숫자들을 n개씩 입력받는다. (-> 크기가 n이므로 벡터 사용)
    3. S의 최솟값을 찾는다.
    4. S의 최솟값을 출력한다.
*/
int main() {
    //1
    int n;
    cin >> n;

    //2  
    vector<int> avec(n);
    vector<int> bvec(n);
    int sum = 0;

    //A원소들 입력받기
    for (int i = 0; i < n; i++) {
        cin >> avec[i];
    }

    //B원소들 입력받기
    for (int i = 0; i < n; i++) {
        cin >> bvec[i];
    }

    //3    
    //a벡터는 내림차순으로 정렬
    sort(avec.rbegin(), avec.rend());
    //b벡터는 올림차순으로 정렬
    sort(bvec.begin(), bvec.end());
   
    //4
    for (int i = 0; i < n; i++) {
        sum+=avec[i] * bvec[i];
    }
    cout << sum << endl;
    
    return 0; 
}