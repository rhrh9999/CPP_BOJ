#include <iostream>
using namespace std;

/*
    1. �ܾ �Է¹޴´�.
    2. �ܾ�� CAMBRIDGE�� ���Ե� ���ĺ����� �����.
    3. ���� �ܾ ����Ѵ�.
*/

int main() {
    //1
    string word;
    cin >> word;

    //2
    string cam = "CAMBRIDGE"; 
    for (int i = 0; i < word.size(); i++) {
        for (int j = 0; j < cam.size(); j++) {
            if (word[i] == cam[j]) word[i] = 0;
        }
    }

    //3
    for (int i = 0; i < word.size(); i++) {
        if (word[i] != 0) cout << word[i];
    }
    return 0;
}