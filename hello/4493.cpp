#include <iostream>
using namespace std;

/*
    1. �׽�Ʈ���̽��� ���� t�� �Է¹޴´�.
    2. �� �׽�Ʈ���̽��� ���������� Ƚ��n�� �Է¹޴´�.
    3. �� �׽�Ʈ���̽����� R P S�� �Է¹޴´�.
    4. �� �׽�Ʈ���̽��� ���ڸ� ã�´�.
    5. ���ڸ� ����Ѵ�.
*/

int main() {
    //1
    int t;
    cin >> t; 

    //2
    while (t--) {
        int n;
        cin >> n;

        //3
        int p1win=0, p2win=0, same=0;

        for (int i = 0; i < n; i++) {
            char p1, p2;
            cin >> p1 >> p2;

            //p1�� p2�� ���� ���� �� ���(�����)
            if (p1 == p2) same++;
            //p1�� �̱�� ��� 3����
            else if (p1 == 'R' && p2 == 'S') p1win++;
            else if (p1 == 'P' && p2 == 'R') p1win++;
            else if (p1 == 'S' && p2 == 'P') p1win++;
            //���� ���̽��� p2�� �̱�� ��� 3����
            else p2win++;
        }
            //4 
            if (p1win > p2win) cout << "Player 1\n";
            else if (p1win < p2win) cout << "Player 2\n";
            else cout << "TIE\n";
    }
}