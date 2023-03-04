#include <iostream>
#include <cmath>
using namespace std;

int mul2(int a);
int mul3(int a);

int main()
{
    int a;
    cout << "Donnez un entier : ";
    cin >> a;
    if (mul2(a) == 1 && mul3(a) == 1)
    {
        cout << endl
             << "Il est pair" << endl;
        cout << "Il est multiple de 3" << endl;
        cout << "Il est divisible par 6" << endl;
    }
    else if (mul2(a) == 1)
    {
        cout << endl
             << "Il est pair" << endl;
    }
    else if (mul3(a) == 1)
    {
        cout << endl
             << "Il est multiple de 3" << endl;
    }
    else
    {
        cout << endl
             << "Il n'est ni pair ni divisible par 3" << endl;
    }
}

int mul2(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int mul3(int a)
{
    if (a % 3 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}