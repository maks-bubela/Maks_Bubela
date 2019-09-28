#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "How much do you earn?";
    cin >> a;
    if (a<1000){
        cout << "Work more!!!" << endl;
    }
    if (a>999){
        if (a<1000000){
            cout << "Good" << endl;

            goto exit;
        }
        cout << "You are a millionaire" <<endl;
    }
    exit:
    cout << "But you done";
}
