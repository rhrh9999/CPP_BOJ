#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        //°ø¹é
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        //º°
        for (int j = N; j > i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}