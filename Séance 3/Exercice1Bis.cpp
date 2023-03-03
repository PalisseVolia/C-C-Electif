#include <iostream>
using namespace std;

void appel();

int main()
{
    for (int i = 0; i < 10; i++)
    {
        appel();
    }
}

void appel()
{
    static int n; // Variable qui garde sa valeur localement
    n += 1;
    cout << "Appel numero : " << n << endl;
}