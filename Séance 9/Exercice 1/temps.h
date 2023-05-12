#ifndef TEMPS_H_INCLUDED
#define TEMPS_H_INCLUDED

class Temps
{
    private:
    int m_heures;
    int m_minutes;
    int m_secondes;

    public:
    Temps(int heures=0, int minutes=0, int secondes=0); //constructeur
    void afficher() const;
    void add(int,int,int);
    int getHeures() const;
    int getMinutes() const;
    int getSecondes() const;
    void setHeures(int);
    void setMinutes(int);
    void setSecondes(int);
    void coincide(Temps &);
    Temps additionne(Temps &);
};

Temps operator+(Temps const& a, Temps const& b);
bool operator==(Temps const& a, Temps const& b);

#endif // TEMPS_H_INCLUDED
