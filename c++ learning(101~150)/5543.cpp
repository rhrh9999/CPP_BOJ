#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //1. �ټ� �ٿ� ���ſ� ���� ������ �Է¹޴´�.
    //2. ���� �� ��Ʈ �޴��� ã�´�.
    //3. ���� �� ��Ʈ �޴��� ������ ����Ѵ�.

    //1
    int burger[3] = { 0, };
    int drink[2] = { 0, };
    //�ܹ��� ���� �Է¹ޱ�
    for (int i = 0; i < 3; i++) {
        cin >> burger[i];
    }
    //���� ���� �Է¹ޱ�
    for (int j = 0; j < 2; j++) {
        cin >> drink[j];
    }

    //2 
    sort(burger, burger + 3);
    sort(drink, drink + 2);

    int cheap = 0;
    cheap = burger[0] + drink[0] - 50;

    //3
    cout << cheap;

    return 0;
}