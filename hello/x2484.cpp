#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//�ڲ� 15���ο��� Ʋ�ȴٰ� �����µ� ���� �����Ŵ� ����.. ��� Ʋ��?
//������ 34���ο��� Ʋ�ȴٰ� ���´�.. ����

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

    vector <int> v; //������ �� ���� �迭

    //2
    while (n--) {
        int arr[7] = { 0, }; //�ֻ��� �� ī�����ϴ� �迭
        int reward = 0;

        int twocnt = 0; //���� ���� 2������ 1������ �Ǻ�
        int twoarr[2] = { 0, }; //�� ���̽��� �� ������ (������ ���Ҷ�)
        int tw = 0;

        int onecnt = 0;
        int onearr[4] = { 0, };
        int on = 0;

        //�ֻ��� �� �Է¹޾� ī�����ϱ�
        int dice = 0;
        for (int i = 0; i < 4; i++) { //�ֻ��� 4�� �� 
            cin >> dice;
            arr[dice]++; //***          
        }

        //3       
        for (int i = 1; i < 7; i++) { //i�� 1~6���� �ݺ� 
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
                twocnt++;
                //cout << "i�� ��(2�� ���� ��): " << i << endl;
                twoarr[tw] = i;
                //cout << "twoarr�迭: " << twoarr[tw] << endl;
                tw++;

                //���� ���� �� �ָ� ����
                if (twocnt == 1) {
                    reward = 1000 + twoarr[0] * 100;

                }
                //���� ���� 2���� 2�� ����
                else if (twocnt == 2) {
                    reward = 2000 + twoarr[0] * 500 + twoarr[1] * 500;
                    break;
                }
            }
            //3-4.��� �ٸ� ���� ������ ���
            //�ڿ������� 1�� �ָ� ã���� �ٷ� ������� ���
            else if (arr[i] == 1) {
                onecnt++;
                //cout << "i�� ��(1�� ���� ��): " << i << endl;
                onearr[on] = i;
                //cout << "onearr�迭: " << onearr[on] << endl;
                on++;

                //cout << "onearr�迭�� ������ " << onearr[3] << endl;
                //���� ������ arr[3]�� ���� ���� 
            }
            reward = 1000 + onearr[3] * 100;


        }
        //cout << "����� " << reward << endl;
        //������ �迭�� �ֱ�
        v.push_back(reward);
    }


    //4
    sort(v.rbegin(), v.rend());
    /*for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }*/
    cout << v[0];

    return 0;
}

