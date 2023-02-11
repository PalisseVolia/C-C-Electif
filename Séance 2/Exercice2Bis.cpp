#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 1;
    double note;
    double sommeN;
    while (note >= 0)
    {
        cout << "Note " << i << " : ";
        cin >> note;
        cout << "\n";
        if (note >= 0)
        {
            sommeN = sommeN + note;
            i = i + 1;
        }
    }
    cout << "Moyenne de ces " << i - 1 << " notes : " << sommeN / (i - 1);
}