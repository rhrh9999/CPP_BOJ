#include <iostream>
#include <vector> 
#include <algorithm> //sort�Լ�
using namespace std;

/*
    1. ���� ����n�� �Է¹޴´�.
    2. ���ڸ� �Է¹޴´�.
    3. �ߺ��� �����ϰ� ������������ �����Ѵ�.
    4. ���ĵ� ����� ����Ѵ�.

*/
int main() {
    //1
    int n;
    cin >> n;

    //2
    vector <int> v(n); //���� ���� (�迭�� ��� arr[n]�� ���� ������(n�� �Է¹޾� �ִ°�) ���ʹ� ����)
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    //3
    sort(v.begin(), v.end()); //�������� ����
    v.erase(unique(v.begin(), v.end()), v.end());
    //���Ҹ� �����ϴ� erase�Լ� unique(v.begin(), v.end()) ~ v.end() ���̿� �ߺ��� ���ҵ��� ����
    //unique�Լ��� �ߺ����� ���� ���ҵ��� �տ������� ä��(�ߺ��� �ֵ��� �״�� �ڿ� ����)

    //4
    for (int j = 0; j < v.size(); j++) {
        cout << v[j] << ' ';
    }

    return 0;
}