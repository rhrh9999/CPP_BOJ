#include <iostream>
#include <vector>
using namespace std;

/*
    pair ���͸� Ȱ��

    1. ��ü ����� �� n�� �Է¹޴´�.
    2. �� ����� �����Կ� Ű�� x,y �� �Է¹޴´�.
    3. �� ����� ��ġ ����� ���ؼ� ����Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
    vector <pair<int, int>> v;
    int x, y;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }

    //3
    //�����Կ� Ű�� ��� Ŀ�� �¸�
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = 0; j < n; j++) {
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}