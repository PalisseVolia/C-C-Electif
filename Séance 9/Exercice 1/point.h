#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include "temps.h"

class point
{
    private:
    float x,y; //coordonnes cartesiennes du point
    Temps m_temps; //objet m_temps en attribut (Exercice 6)

    public:
    point(float,float); //constructeur
    ~point();
    void deplace(float,float); //deplacement
    void affiche_pos() const; //affichage
    //Exercice 6
    void affiche_temps() const;
    void timestep(int,int,int);
    void imposeV(float,float);
};

#endif // POINT_H_INCLUDED
