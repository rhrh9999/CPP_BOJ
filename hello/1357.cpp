#include <iostream>
#include <string>
#include <algorithm> //reverse�Լ�
using namespace std;
/*
1. x y �Է¹���
2. x y -> revó��
3. rev(x)+rev(y) ���ϱ�
4. 3�� �ٽ� revó��
*/

//rev�Լ�
int rev(int num) {
    string s=to_string(num);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main() {
    //1
    int x, y;
    cin >> x >> y;

    //2
    cout << rev(rev(x) + rev(y));

    return 0;
}