#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, n, som;
    som = 0;
    i = 0;

    // ======================================
    // avec boucle while :
    // ======================================

    do
    {
        cout << "donnez un entier : ";
        cin >> n;
        som += n;
        i = i + 1;
    } while (i < 4);

    // ======================================
    // avec boucle while :
    // ======================================
    //
    // while (i < 4)
    // {
    //     cout << "donnez un entier : ";
    //     cin >> n;
    //     som += n;
    //     i = i + 1;
    // }

    // ======================================
    // avec boucle for :
    // ======================================
    //
    // for (i = 0; i < 4; i++)
    // {
    //     cout << "donnez un entier : ";
    //     cin >> n;
    //     som += n;
    // }

    cout << "Somme : " << som << endl;
}