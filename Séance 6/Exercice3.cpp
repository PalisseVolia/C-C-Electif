#include <iostream>
#include <fstream>
#include <string>
#include <random>

using namespace std;

int main()
{
    // Ouverture du fichier texte
    string const Filename("texte.txt");
    ifstream IfFlux(Filename.c_str());

    // Initialisation des variables
    int LineCount = 0;
    string ligne;

    // Vérifie si le fichier a pu être ouvert
    if (IfFlux)
    {
        // Compte le nombre de lignes du fichier
        while (getline(IfFlux, ligne))
        {
            LineCount++;
        }

        // Génère un nombre aléatoire entre 1 et le nombre de lignes du fichier
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(1, LineCount);
        const int NumLigne = dis(gen);

        // Retourne au début du fichier
        IfFlux.clear();
        IfFlux.seekg(0, ios::beg);

        // Remise à zéro du compteur de lignes
        LineCount = 0;

        // récupère la ligne demandée
        while (getline(IfFlux, ligne) && (NumLigne - 1) != LineCount)
        {
            LineCount++;
        }

        // Affiche la ligne demandée
        cout << "La ligne " << NumLigne << " du fichier " << Filename << " est : " << ligne << endl;
    }
    else
    {
        // Affiche un message d'erreur si le fichier n'a pas pu être ouvert
        cout << "Erreur lors de l'ouverture du fichier" << endl;
    }

    cout << endl;
    cout << "tapez une touche pour quitter" << endl;
    cin >> ligne;
}