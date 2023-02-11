#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int first;
    int second;
    int third;
    int fourth;

    for (int i = 2; i <= 2000; i++)
    {
        first = i % 10;
        second = i / 10 % 10;
        third = i / 100 % 10;
        fourth = i / 1000 % 10;
        if (i == (pow(first, 3) + pow(second, 3) + pow(third, 3) + pow(fourth, 3)))
        {
            cout << i << endl;
        }
    }
}