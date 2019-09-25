#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Christmas tree size : ";
    cin >> a;
    for (int i=1;i<a;i+=2){
        for (int q=0;q<a-(i/2);q++){
            cout << " ";
        }
        for (int q=0;q<i;q++){
            cout << "*";
        }
        cout << endl;
    }
    for (int q=0;q<a;q++){
        cout << " ";
    }
    cout <<"*";
}
