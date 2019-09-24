#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Christmas tree size : ";
    cin >> a;
    for (int i=0;i<=a;i++){
        for (int q=i;q!=0;q--){
            cout << "*";
        }
        cout << endl;
    }
}
