#include <iostream>
using namespace std;

/*
    1. n�� �Է¹޴´�.
    2. ù�ٺ��� n��° �ٱ��� ���� ����Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
 
    for (int i = 0; i < n; i++) {
        int last = 2*n - 1;

        if (i == 0) {
            
        }
        else if (i == n - 1) 
            for (int j = 0; j < last; j++) {               
                cout << '*';
            }
    }

    return 0;
}