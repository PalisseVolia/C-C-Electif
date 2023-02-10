#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    int i = 0;
    cout << "Donnez le nombre de lignes :" << endl;
    cin >> N;
    while (i <= N)
    {
        for (int j = 0; j < N - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (N * 2) - ((N - i) * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
        i = i + 1;
    }
}