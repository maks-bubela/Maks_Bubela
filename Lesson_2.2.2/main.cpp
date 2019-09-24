#include <iostream>

using namespace std;

int main()
{
    int a[10],i=0;
    while (i<10){
        a[i]=0;
        i++;
    }
    for (;;){
        cout << "Enter number of the cart : " ;
        cin >> i;
        cout << "How much money to put on the card : ";
        cin >> a[i-1];
        for (int i=0;i<10;i++){
            cout << a[i] << " ";
        }
    }
}
