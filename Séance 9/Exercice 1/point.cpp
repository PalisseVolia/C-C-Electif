#include "point.h"
#include <iostream>

using namespace std ;

point::point(float abs, float ord) //constructeur
{
    x = abs;
    y = ord;
}

point::~point() //destructeur
{
}

void point::deplace(float dx, float dy)
{
    x += dx;
    y += dy;
}

void point::affiche_pos() const
{
    cout<<"Les coordonnées sont : x = "<<x<<", y = "<<y<<endl;
}

void point::affiche_temps() const
{
    m_temps.afficher();
}

void point::timestep(int dh,int dm,int ds)
{
    m_temps.add(dh,dm,ds);
}

void point::imposeV(float vx, float vy)
{
    x += vx*m_temps.getSecondes();
    y += vy*m_temps.getSecondes();
}
