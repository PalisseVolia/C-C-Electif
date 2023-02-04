#include <iostream>
using namespace std;

int main()
{
    double N;
    double somme = 0;
    double factorielle = 1;
    cout << "Entrez N :" << endl;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
        somme = somme + i;
        factorielle = factorielle * i;
    }

    cout << "Somme : " << somme << endl;
    cout << "Factorielle : " << factorielle << endl;
}