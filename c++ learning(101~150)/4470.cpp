#include <iostream>
#include <string>
using namespace std;
/*
    1. ���� �� n�� �Է¹޴´�.
    2. �� �ٸ��� ������ �Է¹޴´�.
    3. ���帶�� �� ��ȣ�� �߰��Ѵ�.
    4. �� ��ȣ�� �߰��� ������ ����Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;
    cin.ignore(); //ǥ���Է¹��ۿ� ���๮��(\n)�� �����ִ� ����
    //ignore()�� �� ���� �� �ڵ忡�� n�� �Էµǰ� str�� �Է¹��� �ʾҴµ�
    //1. �� ��µǴ� ������ �߻���.

    //2
   for(int i=1; i<=n; i++){
        string str;
        getline(cin, str);

        //3,4
        cout << i << ". " << str << endl;

   } 
    return 0;
}