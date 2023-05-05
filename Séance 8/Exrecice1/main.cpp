#include <iostream>
#include "temps.h"

using namespace std;

int main()
{
    Temps temps1, temps2(16, 50, 1);
    temps1.afficher();
    temps2.afficher();
    temps1.add(0, 0, 1);
    temps1.afficher();
    temps2.add(3, 2, 1);
    temps2.afficher();
    temps1.setHeures(12);
    cout << temps1.getHeures() << "h " << temps1.getMinutes() << "m " << temps1.getSecondes() << "s" << endl;
    cout << temps2.getHeures() << "h " << temps2.getMinutes() << "m " << temps2.getSecondes() << "s" << endl;
    return 0;
}
