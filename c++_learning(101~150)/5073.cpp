#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //sort�Լ��� �̿��Ͽ� �� ���� ���̸� �������� ����
    //sort�Լ��� ����ϱ� ���� algorithm ��� ����

    //1. �ﰢ���� �� ���� ���̸� �Է¹޴´�.
    //2. �� ���̽����� �з��Ѵ�. 
    //3. ���̽��� ����� ����Ѵ�. 

    //1
    while (1) {
        int side[3] = { 0, };
        for (int i = 0; i < 3; i++) {
            cin >> side[i];
        }

        //0 0 0�� �Է¹��� ��� �ݺ��� Ż��
        if (side[0] == 0 && side[1] == 0 && side[2] == 0) break; // 0 0 0�� �Է¹��� ��� �ݺ��� Ż��

        //���� �� �� ã��
        sort(side, side + 3);

        //2
        string out;
        if (side[0] + side[1] <= side[2]) out = "Invalid"; //���� �� ���� ���̺��� ������ �� ���� ������ ���� ���� ���� ���
        else if(side[0]==side[1] && side[1]==side[2] && side[0]==side[2])
        //else if (side[0] == side[1] == side[2])
            out = "Equilateral";
        else if (side[0] == side[1] || side[1] == side[2] || side[0] == side[2])
            out = "Isosceles";
        else out = "Scalene";

        //3
        cout << out << endl;

    }
    return 0;
}