#include <iostream>
using namespace std;

/* �Լ�ver
    1. �ܾ �Է¹޴´�.
    2. ī�̻縣 �ܾ ���� �ܾ�� ��ģ��.
    3. ��ģ �ܾ ����Ѵ�.
*/

void findword(string word) {
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= 68 && word[i] <= 90) word[i] = word[i] - 3;
        else word[i] = word[i] + 23;
        cout << word[i]; //3
    }
}

int main() {
    //1
    string word;
    cin >> word;

    //2
    findword(word);

    return 0;
}