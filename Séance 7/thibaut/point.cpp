#include <iostream>
#include "point.h"

using namespace std ;

Point :: Point (float abs, float ord)
{
    x = abs ; 
    y = ord ;
}

float Point :: getX ()
{
    return Point :: x ;
}

float Point :: getY()
{
    return Point :: y ;
}

void Point :: deplace (float dx, float dy)
{
    x += dx ;
    y = dy ;
}

void Point :: affiche_pos ()
{
    cout << "[ " <<  Point :: x <<";"<< Point :: y ; "]";                                                                                                       
}