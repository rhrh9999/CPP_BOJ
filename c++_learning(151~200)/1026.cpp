#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
    sort������ �̿�����
    1. n�� �Է¹޴´�.
    2. A�� ���ڵ�, B�� ���ڵ��� n���� �Է¹޴´�. (-> ũ�Ⱑ n�̹Ƿ� ���� ���)
    3. S�� �ּڰ��� ã�´�.
    4. S�� �ּڰ��� ����Ѵ�.
*/
int main() {
    //1
    int n;
    cin >> n;

    //2  
    vector<int> avec(n);
    vector<int> bvec(n);
    int sum = 0;

    //A���ҵ� �Է¹ޱ�
    for (int i = 0; i < n; i++) {
        cin >> avec[i];
    }

    //B���ҵ� �Է¹ޱ�
    for (int i = 0; i < n; i++) {
        cin >> bvec[i];
    }

    //3    
    //a���ʹ� ������������ ����
    sort(avec.rbegin(), avec.rend());
    //b���ʹ� �ø��������� ����
    sort(bvec.begin(), bvec.end());
   
    //4
    for (int i = 0; i < n; i++) {
        sum+=avec[i] * bvec[i];
    }
    cout << sum << endl;
    
    return 0; 
}