#include <iostream>
#include <string>
using namespace std;

int main() {
    //1. �ܾ �Է¹޴´�.
    //2. �� ���� ���´�.
    //3. �� ���� ���� ������ ����Ѵ�. 

    //1
    string str;
    cin >> str;

    //2
    int len = str.length();

    for (int i = 0; i<len; i ++) {
        cout << str[i];
        //3
        if (i % 10 == 9) cout << endl;
    }
    cout << endl;
    return 0;
}