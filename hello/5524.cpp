#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int j=0; j<n; j++) {
        string si;
        cin >> si;

        //1) tolower함수로 풀기
        for (int i = 0; i <= si.size(); i++) {
                si[i]=tolower(si[i]);     
        }

        //2)
        for (int i = 0; i <= si.size(); i++) {
            if (si[i] >= 65 && si[i] <= 90) {
                si[i] += 32;
        }

        cout << si << endl;
    }
    return 0;
}