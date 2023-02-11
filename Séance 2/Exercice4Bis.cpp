#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double prepreUn = 1;
    double preUn = 1;
    double Un = 1;
    double temp;
    int N;

    cout << "Donnez le nombre d'iterations : ";
    cin >> N;
    cout << "\n";

    if (N == 1)
    {
        cout << "Pour " << N << " iterations, Un = " << prepreUn;
    }
    else if (N == 2)
    {
        cout << "Pour " << N << " iterations, Un = " << preUn;
    }
    else
    {
        for (int i = 1; i <= N - 2; i++)
        {
            Un = preUn + prepreUn;
            prepreUn = preUn;
            preUn = Un;
        }
        cout << "Pour " << N << " iterations, Un = " << Un;
    }
}