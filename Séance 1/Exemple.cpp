#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i;
    float x;
    float racx;
    const int NFOIS = 5;
    cout << "Bonjour" << endl;
    cout << "Je vais vous calculer " << NFOIS << " racines carrees" << endl;
    for (i = 0; i < NFOIS; i++)
    {
        cout << "Donnez un nombre : ";
        cin >> x;
        if (x < 0.0)
            cout << "Le nombre " << x << " ne possede pas de racine carree" << endl;
        else
        {
            racx = sqrt(x);
            cout << "Le nombre " << x << " a pour racine carree : " << racx << endl;
        }
    }
    cout << "Travail termine - au revoir " << endl;
}