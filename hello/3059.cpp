#include <iostream>
using namespace std;

/*
    1. T�� �Է¹޴´�.
    2. T��ŭ �׽�Ʈ ������S�� �Է¹޴´�.
    3. �� ���ڿ����� �������� �ʴ� ���ĺ� �빮�ڸ� ã�´�.
    4. �������� �ʴ� ���ĺ� �빮���� ���� ã�´�.
    5. �� ���� ����Ѵ�.
*/

int main() {
    //1
    int t;
    cin >> t;

    // 2
    while(t--) {
        string s;
        cin >> s;

        //���ĺ� �빮�� �迭arr ���� 
        int arr[26] = { 0, };
        int cnt = 0;

        //3
        for (int i = 0; i < s.size(); i++) {
             cnt= s[i] - 65;
             arr[cnt]++;
        }

        //4
        int sum = 0; 
        for (int j = 0; j < 26; j++) {
            if (arr[j] == 0) {
                sum += j + 65;
            }
        }

        //5
        cout << sum << endl;
    }
    return 0;
}