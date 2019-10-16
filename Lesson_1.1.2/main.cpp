#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "How much do you earn?";
    cin >> a;
    if (a<1000){
        cout << "Work more!!!" << endl;
        goto exit;
    }

        if (a<10000000){
            while (a<1000000){
                cout << "Good" << endl;
                goto exit;
            }
            while (a>999999){
                cout << "You are a millionaire" << endl;
                goto exit;
            }
        }
        cout << "You are a millionaire" <<endl;

    exit:
    cout << "But you done";
}
