#include <iostream>
#include <vector>
using namespace std;

/*
    1. �׽�Ʈ���̽��� ���� t�� �Է¹޴´�.
    2. ��x�� �Է¹޴´�.
    3. �� ���� �Ƹ��ٿ� ������ ã�´�.
    4. �Ƹ��ٿ� ������ ����Ѵ�.

*/

int main() {
    //1
    int t;
    cin >> t;

    //2
    while (t--) {
     int arr[10] = { 0, }; //ī���� �迭
     int cnt = 0;

     string s;
     cin >> s;

     //���� string���� �Է¹��� ���ڴ� '����'��
     //�ƽ�Ű�ڵ��� ��
     //1=(int)49, 2=(int)50 ... �׷��� �����ϰ� ���ַ��� 48�� �������
     for (int i = 0; i < s.size(); i++) {       
         arr[s[i] - 48]++;
     }

     //4
     for (int i = 0; i < 10; i++) {
            if (arr[i] != 0) cnt++; //�ѹ��� ���� ���� ī����
     }
        cout << cnt << endl;
    }
    return 0; 
}