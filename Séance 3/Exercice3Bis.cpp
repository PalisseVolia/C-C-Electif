#include <iostream>
#include <cmath>
using namespace std;

void ligne(char c, int n);
void boite(int l, int h, int e);

int main()
{
    int l, h, e;
    cout << "L = ";
    cin >> l;
    cout << "H = ";
    cin >> h;
    cout << "E = ";
    cin >> e;
    boite(l, h, e);
}

void ligne(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << c;
    }
}

void boite(int l, int h, int e)
{
    for (int i = 0; i < e; i++)
    {
        ligne('#', l + 2 * e);
        cout << endl;
    }
    for (int i = 0; i < h; i++)
    {
        ligne('#', e);
        ligne(' ', l);
        ligne('#', e);
        cout << endl;
    }
    for (int i = 0; i < e; i++)
    {
        ligne('#', l + 2 * e);
        cout << endl;
    }
}