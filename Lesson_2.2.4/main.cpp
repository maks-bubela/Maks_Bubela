#include <iostream>

using namespace std;

int main()
{
    int a[5],b=0;
    for (int i=0;i<5;i++){
        cout << "Stars in " << i+1 << " column : ";
        cin >> a[i];
        if (a[i]>b)
            b=a[i];
    }
    for (int i=0;i<b;i++){
        for (int q=0;q<5;q++){
            if (a[q]>i){
                cout << "*";

            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
