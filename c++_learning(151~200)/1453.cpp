#include <iostream>
using namespace std;

/*
    1. �մԼ�n�� �Է¹޴´�.
    2. �� �մ��� �ɰ�;��ϴ� �ڸ��� �Է¹޴´�.
    3. �������ϴ� �մ� ���� ī��Ʈ�Ѵ�.
    4. �������� �մ� ���� ����Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;
    //2
    int seat[101] = { 0, };
    int sorry = 0; //���� 
    int guest;
    //3
    while (n--) {
        cin >> guest;
        seat[guest]++; //seat[guest]=1
        if (seat[guest] > 1) //���� �մ��� ���� �ڸ��� �䱸�Ҷ� ����..
            sorry++;
    }
    //4
    cout << sorry;
    return 0;
}