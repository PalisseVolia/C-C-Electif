#include <iostream>
#include <cmath>
using namespace std;

int puiss(int m, int n);

int main()
{
    int m;
    int n;
    cout << "Entrez le nombre :" << endl;
    cin >> m;
    cout << "Entrez la puissance :" << endl;
    cin >> n;
    cout << "Puissance : " << puiss(m, n) << endl;
}

int puiss(int m, int n)
{
    return (pow(m, n));
}