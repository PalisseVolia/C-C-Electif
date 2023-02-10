#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double mod3;
    double mod5;
    for (int i = 1; i <= 199; i++)
    {
        mod3 = i % 3;
        mod5 = i % 5;
        if ((mod3 == 0) && (mod5 == 0))
        {
            cout << "FizzBuzz" << endl;
        }
        else if (mod3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (mod5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}