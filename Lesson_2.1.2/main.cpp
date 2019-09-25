#include <iostream>

using namespace std;

int main()
{
    int a,b=-1;
    cout << "Your number? : ";
    cin >> a;
    for (int i=0;i-1<a;i++){
        if (i==a){
            cout << i ;
            break;
        }
        cout << i << ",";
    }
}


