#include <iostream>
#include <cmath> //ceil�Լ��� �̿��ϱ� ����
using namespace std;

/*
1. h w n m�� �Է¹޴´�. (h w�� ���ǽ� ���̺�, n m�� ���������ϴ� �Ÿ�)
2. ���ǽ��� ������ �� �ִ� �ִ� �ο��� ���Ѵ�.
3. 2���� ����Ѵ�.
*/

int main() {
    
    //1
    double h, w, n, m; 
    cin >> h >> w >> n >> m;

    //2
    double row = 0, column = 0;
    row = (long)ceil(h / (n + 1));
    column = (long)ceil(w / (m + 1));

    //3
    int sum = row * column;
    cout << sum << endl;

    return 0; 
}