#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "How much do you earn?";
    cin >> a;
    if (a>999999)
    {
        cout << "You are a millionaire" <<endl;

    }
     if (a>999)
    {
        if (a<1000000)
      {
        cout << "Good" << endl;
      }


    }
     if (a<1000)
    {
        cout << "Work more!!!" << endl;
    }
    cout << "But you done";
}
