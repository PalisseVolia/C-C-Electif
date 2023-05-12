#include <iostream>
#include "temps.h"

using namespace std;

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

void Temps::coincide(Temps &b)
{
    if (this->m_heures == b.m_heures && this->m_minutes == b.m_minutes && this->m_secondes == b.m_secondes)
        cout << "Les deux temps sont identiques";
    else
        cout << "Les deux temps sont différents";
}

Temps Temps::additionne(Temps &b)
{
    this->m_secondes += b.m_secondes;
    // si on depasse de 60, on les ajoute dans les minutes
    this->m_minutes = this->m_minutes + b.m_minutes + this->m_secondes / 60;
    this->m_secondes %= 60;
    // si on depasse de 60, on les ajoute dans les minutes
    this->m_heures = this->m_heures + b.m_heures + this->m_minutes / 60;
    this->m_minutes %= 60;
    // m_heures %= 24;
    return *this;
}

Temps operator+(Temps const &a, Temps const &b)
{
    Temps res;
    res.setSecondes(a.getSecondes() + b.getSecondes());
    res.setMinutes(a.getMinutes() + b.getMinutes() + res.getSecondes() / 60);
    res.setSecondes(res.getSecondes() % 60);
    res.setHeures(a.getHeures() + b.getHeures() + res.getMinutes() / 60);
    res.setMinutes(res.getMinutes() % 60);
    res.setHeures(res.getHeures() % 24);
    return res;
}

bool operator==(Temps const &a, Temps const &b)
{
    if (a.getHeures() == b.getHeures() && a.getMinutes() == b.getMinutes() && a.getSecondes() == b.getSecondes())
        return true;
    else
        return false;
}
