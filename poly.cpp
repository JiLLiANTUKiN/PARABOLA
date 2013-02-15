#include "poly.h"
#include <math.h>
#include <iostream>

using namespace std;
poly::poly()
{
    //ctor
}

poly::~poly()
{
    //dtor
}

void poly::setvalue_a (int va)
    {
        value_a = va;
    }
void poly::setvalue_b (int vb)
    {
        value_b = vb;
    }
void poly::setvalue_c (int vc)
    {
        value_c = vc;
    }

int poly::getvalue_a ()
    {
        return value_a;
    }
int poly::getvalue_b()
    {
        return value_b;
    }
int poly::getvalue_c()
    {
        return value_c;
    }
int poly::caly (int x)
    {
        float y;
        y = value_a*(pow(x,2))+(value_b*x)+value_c;
        return y;
    }
int poly::calroots(float y)
    {
        int r;
        if (y<0)
            {
                r = 0;
            }
        else if (y==0)
            {
                r = 1;
            }
        else if (y>0)
            {
                r = 2;
            }
    return r;
    }

int poly::calextre (int a)
    {
        if (a<0)
        cout << "The type of extremum is maximum "<< endl;
        else if (a==0)
        cout << "There is no extremum "<< endl;
        else if (a>0)
        cout << "The type of extremum is minimum"<<endl;
    return 0;
    }
