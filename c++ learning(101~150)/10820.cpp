#include <iostream>
#include <string> //getline�Լ� �̿�
using namespace std;

/*
    1. ���ڿ� n���� �Է¹޴´�.
    2. �� ���ڿ����� �ҹ���, �빮��, ����, ������ ������ ã�´�.
    3. ã�� �� ���� ������ ����Ѵ�.
*/

int main() {
    //1
    string str;
    while (getline(cin, str)) {

        //2
        int small = 0, big = 0, num = 0, gap = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 65 && str[i] <= 90) big++;
            else if (str[i] >= 97 && str[i] <= 122) small++;
            else if (isdigit(str[i]) != 0) num++;
            //else if(str[i]>='0' && str[i]<='9') num++;
            else if (str[i] == ' ') gap++;
        }

        //3
        cout << small << ' ' << big << ' ' << num << ' ' << gap << endl;
    }
    return 0;
}