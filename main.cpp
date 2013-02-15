#include <iostream>
#include <math.h>
#include "poly.h"
#include<math.h>
using namespace std;

int main()
{
    int y,z,roots,root, type,X,extre, a,x,e,f,g,d,A;

    cout<<"Enter 3 digits:"<<endl;
    cin>>e>>f>>g;
    cout<<"enter the value of x:"<<endl;
    cin>>x;


if (d<0){roots=0;}
if (d==0){roots=1;}
if (d>0){roots=2;}






    cout << "The number of root is "<< roots<< endl;
    //dito kayo maglalagay ng formula para sa (roots)
    //root ung variable na ginamit ko :)
    //d=discriminant
    //B=f po ung second input digit value
    cout<<"root="<<root<<endl;

y=e*(x*x)+(f*x)+g;
cout<<"the value of y is:"<<y<<endl;
A=((f*x)+g-y)/(x*x);

if (A<0){ cout<<"Type of extremum is maximum"<<endl;}
if (A==0){ cout<<"Type of extremum is none"<<endl;}
if (A>0){ cout<<"Type of extremum is minimum"<<endl;}




    if (a>0||a<0)
        {
            X = -f/(e*2);
            cout << "The extremum of X="<< X<< endl;
        }
    return 0;
}

