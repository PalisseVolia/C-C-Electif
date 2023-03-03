#include <iostream>
#include <cmath>
using namespace std;

int operation(float a, float b, char c);

int main()
{
    float a;
    float b;
    char c;
    cout << "Donnez a :" << endl;
    cin >> a;
    cout << "Donnez b :" << endl;
    cin >> b;
    cout << "Operation (+,-,*,/) :" << endl;
    cin >> c;
    cout << "Resultat : " << operation(a, b, c) << endl;
}

int operation(float a, float b, char c)
{
    switch (c)
    {
    case '+':
        return (a + b);
        break;
    case '-':
        return (a - b);
        break;
    case '*':
        return (a * b);
        break;
    case '/':
        return (a / b);
        break;

    default:
        return (0);
        break;
    }
}