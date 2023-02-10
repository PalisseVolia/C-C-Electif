#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double heures = 0;
    double minutes = 0;
    double secondes = 0;

    while (true)
    {
        secondes = secondes + 1;
        if (secondes == 60)
        {
            secondes = 0;
            minutes = minutes + 1;
        }
        if (minutes == 60)
        {
            minutes = 0;
            heures = heures + 1;
        }
        if (heures == 24)
        {
            heures = 0;
        }

        cout << heures << " : " << minutes << " : " << secondes << endl;
    }
}