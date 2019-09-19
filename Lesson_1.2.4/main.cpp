#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;
    if (a*b==c||a*c==b||b*c==a)
        cout << "YES";
    else if (a+b==c||a+c==b||b+c==a)
        cout << "YES";
    else if (a-b==c||a-c==b||b-c==a)
        cout << "YES";
    else if (a/b==c||a/c==b||b/c==a)
        cout << "YES";
    else
        cout << "NO";
}
