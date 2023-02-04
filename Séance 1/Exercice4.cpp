#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    cout << "Entrez a,b et c :" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    double delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        cout << "Pas de solutions." << endl;
    }
    else if (delta == 0)
    {
        cout << "une seule solution : " << -(b / 2 * a) << endl;
    }
    else if (delta > 0)
    {
        cout << "Deux solutions : " << (-b - sqrt(delta)) / (2 * a) << " et " << (-b + sqrt(delta)) / (2 * a) << endl;
    }
}