#include <iostream>

using namespace std;

int main()
{
    int a[5];
    for (int i=0;i<5;i++){
        cout << "Stars in " << i+1 << " column : ";
        cin >> a[i];
    }
    for (int i=0;i<5;i++){
        for (int q=0;q<a[i];q++){
            cout << "*";
        }
        cout << endl;
    }
}
