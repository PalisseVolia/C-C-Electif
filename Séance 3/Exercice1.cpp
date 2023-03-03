#include <iostream>
using namespace std;

void f1();
void f2(int n);
int f3(int n);

int main()
{
    int n = 0;
    cout << "f1 :" << endl;
    f1();
    cout << "Entrez le nombre de bonjours :" << endl;
    cin >> n;
    cout << "f2 :" << endl;
    f2(n);
    cout << "f3 :" << endl;
    cout << f3(n) << endl;
}

void f1()
{
    cout << "bonjour" << endl;
}

void f2(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "bonjour" << endl;
    }
}

int f3(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "bonjour" << endl;
    }
    return 0;
}