#include <iostream>
#include <stdio.h>

using namespace std;

void triplePointeur(int *pointeurSurNombre);

int main()
{
    int nombre;
    cout << "Entrez un nombre : " << endl;
    cin >> nombre;
    triplePointeur(&nombre);
    cout << "Le nombre apres avoir ete triple : " << nombre << endl;
    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre = (*pointeurSurNombre) * 3;
}
