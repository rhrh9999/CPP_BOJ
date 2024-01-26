#include <iostream>
using namespace std;

int main() {
    //1
    int t;
    cin >> t;

    //2
    int a, b;
    char comma;
    while (t--) {
        cin >> a >>comma>> b;
        cout << a + b << '\n';
    }
    return 0;
}