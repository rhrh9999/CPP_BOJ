#include <iostream>
#include <algorithm>
using namespace std;
//�� Ǫ�� �׽�Ʈ in 1037.cpp

int main() {

    //1. n�� ��¥ ��� ������ �Է¹޴´�.
    //2. n�� ��¥ ������� �Է¹޴´�. 
    //3. n�� ã�´�.
    //4. n�� ����Ѵ�.

    //1
    int realnum = 0;
    cin >> realnum;

    //2
    int num[100] = { 0, };
    for (int i = 0; i < realnum; i++) {
        cin >> num[i];
    }

    //����� ������������ ����
    sort(num, num + realnum);

    //3
    int n = 0;
    n = num[0] * num[realnum - 1];

    //4
    cout << n;
    return 0;
}