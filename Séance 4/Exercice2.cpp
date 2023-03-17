#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

static vector<double> tableauIN;
void tri();
void TABalamain();
void TABdecroissant();
void TABaleatoire();
void Affichage();
void AutoCheck();

int main()
{
    char choix = '0';
    bool choixCheck = false;

    while (choixCheck == false)
    {
        if (choix == '1')
        {
            TABalamain();
            choixCheck = true;
        }
        else if (choix == '2')
        {
            TABdecroissant();
            choixCheck = true;
        }
        else if (choix == '3')
        {
            TABaleatoire();
            choixCheck = true;
        }
        else
        {
            cout << "Quelle methode de generation utiliser ?" << endl;
            cout << "(1) - Tableau fait a la main" << endl;
            cout << "(2) - Tableau 0 a 99 decroissant" << endl;
            cout << "(3) - Tableau valeurs aleatoires" << endl;
            cin >> choix;
            choixCheck = false;
            cout << endl;
        }
    }

    cout << "Tableau choisi : " << endl;
    Affichage();
    cout << endl
         << endl;

    tri();

    choix = '0';
    choixCheck = false;

    while (choixCheck == false)
    {
        if (choix == '1')
        {
            cout << "Le tableau trie est le suivant : " << endl;
            Affichage();
            cout << endl
                 << endl;
            choixCheck = true;
        }
        else if (choix == '2')
        {
            AutoCheck();
            choixCheck = true;
        }
        else
        {
            cout << "Quelle verification utiliser ?" << endl;
            cout << "(1) - Manuelle" << endl;
            cout << "(2) - Automatique" << endl;
            cin >> choix;
            choixCheck = false;
            cout << endl;
        }
    }

    cout << endl;
    cout << "tapez une touche pour quitter" << endl;
    cin >> choix;
}

void tri()
{
    double temp;
    bool change = true;
    while (change == true)
    {
        change = false;
        for (int i = 0; i < tableauIN.size(); i++)
        {
            if (tableauIN[i] > tableauIN[i + 1])
            {
                temp = tableauIN[i];
                tableauIN[i] = tableauIN[i + 1];
                tableauIN[i + 1] = temp;
                change = true;
            }
        }
    }
}

void TABalamain()
{
    tableauIN.push_back(19);
    tableauIN.push_back(62);
    tableauIN.push_back(10);
    tableauIN.push_back(20);
    tableauIN.push_back(15);
    tableauIN.push_back(30);
    tableauIN.push_back(12);
    tableauIN.push_back(27);
    tableauIN.push_back(55);
    tableauIN.push_back(70);
    tableauIN.push_back(60);
    tableauIN.push_back(12);
    tableauIN.push_back(58);
    tableauIN.push_back(32);
    tableauIN.push_back(27);
    tableauIN.push_back(99);
    tableauIN.push_back(13);
    tableauIN.push_back(71);
    tableauIN.push_back(48);
    tableauIN.push_back(36);
}
void TABdecroissant()
{
    for (int i = 0; i < 100; i++)
    {
        tableauIN.push_back(100 - i);
    }
}
void TABaleatoire()
{
    for (int i = 0; i < 100; i++)
    {
        tableauIN.push_back(rand() % 100 + 1);
    }
}

void Affichage()
{
    for (int i = 0; i < tableauIN.size(); i++)
    {
        cout << tableauIN[i] << "  ";
    }
}

void AutoCheck()
{
    bool OK = true;
    for (int i = 0; i < tableauIN.size(); i++)
    {
        if (tableauIN[i] > tableauIN[i + 1])
        {
            bool OK = false;
        }
    }
    if (OK == true)
    {
        cout << "Le tableau est range !" << endl;
    }
    else
    {
        cout << "Le tableau n'est pas range !" << endl;
    }
}