#ifndef TEMPS_H_INCLUDED
#define TEMPS_H_INCLUDED

class Temps
{
private:
    int m_heures;
    int m_minutes;
    int m_secondes;

public:
    Temps();              // constructeur
    Temps(int, int, int); // constructeur
    void afficher() const;
    void add(int heures, int minutes, int secondes);
    int getHeures() const;
    int getMinutes() const;
    int getSecondes() const;

    void setHeures(int heures);
    void setMinutes(int minutes);
    void setSecondes(int secondes);
};

#endif // TEMPS_H_INCLUDED
