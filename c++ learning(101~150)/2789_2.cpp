#include <iostream>
using namespace std;

/*
    1. �ܾ �Է¹޴´�.
    2. �ܾ�� CAMBRIDGE�� ���Ե� ���ĺ����� �����.
    3. ���� �ܾ ����Ѵ�.
*/

//ķ�긴�� ���ڿ� �������� Ȯ���ϴ� �Լ�
int cambridge(char ch) {
    return ((ch >= 'A' && ch <= 'E') || ch == 'G' || ch == 'I' || ch == 'M' || ch == 'R');
}


int main() {
    //1
    string word;
    cin >> word;

    //2
    for (int i = 0; i < word.size(); i++) {
        if (!cambridge(word[i])) cout << word[i]; //3
    }
    
    return 0;
}