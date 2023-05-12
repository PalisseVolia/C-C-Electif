#include <iostream>
#include "temps.h"
#include "point.h"

using namespace std;

int main()
{
    //Exercice 1
    /*
    Temps temps1(0,0,1);
    cout << temps1.getHeures() << "h" << endl;
    cout << temps1.getMinutes() << "m" << endl;
    cout << temps1.getSecondes() << "s" << endl;
    temps1.setHeures(16);
    temps1.setMinutes(35);
    temps1.setSecondes(20);
    temps1.afficher();
    */
    /*
    // Exercice 2
    Temps temps1(16,35,1), temps2(16, 35, 1);
    temps1.afficher();
    temps2.afficher();
    temps1.coincide(temps2);
    */
    /*
    //Exercice 3
    Temps temps1(0,0,1), temps2(14, 16, 50);
    temps1.additionne(temps2);
    temps1.afficher();
    */
    /*
    //Exercice 4
    Temps resultat, temps1(14,30,1), temps2(1, 30, 1);
    resultat = temps1 + temps2;
    resultat.afficher();
    */
    /*
    //Exercice 5
    Temps temps1(0,0,1), temps2(0, 0, 1);
    if(temps1==temps2)
        cout << "Les deux temps sont identiques";
    else
        cout << "Les deux temps sont différents";
    */
    /*
    //Exercice 6
    point p1(0.86,0.5);
    p1.affiche_pos();
    p1.timestep(0,0,1);
    p1.imposeV(1.0,2.0);
    p1.affiche_pos();
    */
    return 0;
}
