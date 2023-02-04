#include <iostream>
#include <string>
using namespace std;

int main()
{
    string prenom;
    float age;
    cout << "Entrez votre prenom :" << endl;
    cin >> prenom;
    cout << "Entrez votre age :" << endl;
    cin >> age;
    cout << "Age en jours : " << age * 365 << " jours" << endl;
}