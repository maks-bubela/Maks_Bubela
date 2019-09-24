#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "how many stars to display? : ";
    cin >> a;
    while (a>0)
    {
        cout << "*" << " ";
        a--;
    }

}
