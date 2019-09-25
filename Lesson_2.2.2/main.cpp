#include <iostream>

using namespace std;

int main()
{
    int a[10],i=0,b,q=0;
    while (i<10){
        a[i]=0;
        i++;
    }
    for (;;){
        do {
            cout << "Enter number of the cart : " ;
            cin >> i;
        if(i<1||i>10)
            cout << "ERROR \nTry again" << endl;
        }while (i<1||i>10);
        cout << "How much money to put on the card : ";
        cin >> b;
        a[i-1]+=b;
        for (int i=0;i<10;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
