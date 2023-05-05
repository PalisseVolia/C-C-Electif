#include <iostream>
#include "temps.h"

using namespace std;

Temps::Temps()
{
    m_heures = 0;
    m_minutes = 0;
    m_secondes = 0;
}

Temps::Temps(int heures, int minutes, int secondes)
{
    m_heures = heures;
    m_minutes = minutes;
    m_secondes = secondes;
}

void Temps::afficher() const
{
    cout << m_heures << "h " << m_minutes << "m " << m_secondes << "s" << endl;
}

void Temps::add(int heures, int minutes, int secondes)
{
    m_secondes += secondes;
    // si on depasse de 60, on les ajoute dans les minutes
    m_minutes = m_minutes + minutes + m_secondes / 60;
    m_secondes %= 60;
    // si on depasse de 60, on les ajoute dans les minutes
    m_heures = m_heures + heures + m_minutes / 60;
    m_minutes %= 60;
    // m_heures %= 24;
}

int Temps::getHeures() const
{
    return m_heures;
}
int Temps::getMinutes() const
{
    return m_minutes;
}
int Temps::getSecondes() const
{
    return m_secondes;
}

void Temps::setHeures(int heures)
{
    m_heures = heures;
}
void Temps::setMinutes(int minutes)
{
    m_minutes = minutes;
}
void Temps::setSecondes(int secondes)
{
    m_secondes = secondes;
}