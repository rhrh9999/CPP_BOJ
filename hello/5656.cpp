#include <iostream>
#include <string> //getline�Լ� ��������
using namespace std;

/*
    1. �� ���� �Է¹޴´�.
    2. �� ���� ����� true���� false���� Ȯ���Ѵ�.
    3. true false ���� ����Ѵ�.
*/

int main() {
    //1
    int a, b;
    string oper;
    bool check;

    //2
    string res;
    int cnt = 1;

    while (1) {   
        cin >> a >> oper >> b;

        if (oper == "E") break;

        //2-1
        if (oper == ">")  check = (a > b);
        //2-2
        else if (oper == ">=") check = (a >= b);
        //2-3
        else if (oper == "<") check = (a < b); 
        //2-4
        else if (oper == "<=") check = (a <= b);       
        //2-5
        else if (oper == "==")  check = (a == b);        
        //2-6
        else if (oper == "!=")  check = (a != b);        

        //check�� Ȯ���ؼ� true,false �з��ϱ�
        if (check == 1) res = "true";
        else res = "false";

        //3
        cout << "Case " << cnt << ": " << res << endl;
        cnt++;
    }

    return 0;
}