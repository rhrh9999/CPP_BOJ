#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//�ڲ� 15���ο��� Ʋ�ȴٰ� �����µ� ���� �����Ŵ� ����.. ��� Ʋ��?

/*
    1. ������ �� n�� �Է¹޴´�.
    2. �� ����� ���� 4���� ���� �Է¹޴´�.
    3. �� ������� ����� ����Ѵ�.
    4. ���� ���� ����� ���´�.
    5. ���� ���� ����� ����Ѵ�.
*/

int main() {
    //1
    int n;
    cin >> n;

    //������ �� ���� �迭
    vector <int> v;

    //2
    while (n--) {
        int arr[7] = { 0, }; //�ֻ��� �� ī�����ϴ� �迭
        int reward = 0;

        //�ֻ��� �� �Է¹޾� ī�����ϱ�
        int dice=0;
        for (int i = 0; i < 4; i++) { //�ֻ��� 4�� �� 
            cin >> dice;
            arr[dice]++; //***          
        }

        //3       
        for (int i = 1; i < 7; i++) {
            //3-1. ���� ���� 4��
            if (arr[i] == 4) {
                reward = 50000 + i * 5000;
                break;
            }
            //3-2. ���� ���� 3��
            else if (arr[i] == 3) {
                reward = 10000 + i * 1000;
                break;
            }
            //3-3. ���� ���� 2���� 2���� ���� ���� 1�ָ� ���� ��� ó��
            else if (arr[i] == 2) 
            {
                //���� ���� �� �ָ� ����
                reward = 1000 + i * 100;
                break;

                //���� ���� 2���� 2�� ����
                for (int j = i + 1; j < 7; j++) {                  
                    if (arr[j] == 2) {
                        reward = 2000 + i * 500 + j * 500;
                        break;
                    }
                   
                }
            }
            //3-4. ���� ū ���� ������ ���
            //�ڿ������� 1�� �ָ� ã���� �ٷ� ������� ���
            else {
                for (int k = 6; k >= 1; k--) {
                    if (arr[k] == 1) reward = k * 100;      
                    break;
                }
            }         
        }       
        //������ �迭�� �ֱ�
        v.push_back(reward); 
      
    }
    //4
    sort(v.rbegin(), v.rend());
    cout << v[0];

    return 0;

}