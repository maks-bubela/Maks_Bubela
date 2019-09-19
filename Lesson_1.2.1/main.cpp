#include <iostream>
#include<cmath>
#include <complex>
using namespace std;

int main()
{
    float a,b,c,x1,x2,D;
    cout << "Insert the a : ";
    cin >> a;
    cout << "Insert the b : ";
    cin >> b;
    cout << "Insert the c : ";
    cin >> c;
    D=pow(b,2)-(4*a*c);
    if (D>0)
    {
        x1=(-b+sqrt(D))/2*a;
        x2=(-b-sqrt(D))/2*a;
        cout << "x1 = " << x1 << endl << "x2 = " << x2;
    }
    else if (D==0)
    {
        x1=-b/(2*a);
        cout << "x1 = " << x1;
    }
    else if (D<0)
    {   D=-D;
        cout << "x1 = " << -b/(2*a) << "+" << sqrt(D)/(2*a) << "i" << endl ;
        cout << "x2 = " << -b/(2*a) << "-" << sqrt(D)/(2*a) << "i" ;
    }

}
