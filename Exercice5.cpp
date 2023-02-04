#include <iostream>
#include <cmath>
using namespace std;

double lenght(double a, double f)
{
    return (a * (1 + (2 / 3) * pow(((2 * f) / a), 2)));
}

int main()
{
    double a;
    double f;
    cout << "Entrez la distance entre les pylones :" << endl;
    cin >> a;
    cout << "Entrez la fleche mesuree :" << endl;
    cin >> f;

    cout << "Le cable a une longueur de : " << lenght(a, f) << " metres." << endl;
}