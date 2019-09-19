#include <iostream>

using namespace std;

int main()
{
    int n,m,k,sum;
    cout << "How many cones with nuts a squirrel collected? : ";
    cin >> n;
    cout << "How many nuts should be in a cone? : ";
    cin >> m;
    cout << "How many nuts are needed? : ";
    cin >> k;
    sum=n*m;
    if (sum>=k)
        cout << "YES";
    else
        cout << "NO";
}
