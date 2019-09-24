#include <iostream>

using namespace std;

int main()
{
    int a,i=0;
    char jnumb;
    while (jnumb!='a'&&jnumb!='b' &&jnumb!='c'){
    if (i>=1)
    cout << "ERROR try again" << endl;
    cout << "job number (a,b,c) : ";
    cin >> jnumb;
    i++;

    }
    cout << "Christmas tree size : ";
    cin >> a;
    switch (jnumb) {
    case 'a': for (int i=0;i<=a;i++){
        for (int q=i;q!=0;q--){
            cout << "a";
        }
        cout << endl;
    }break;
    case 'b':
    for (int i=a;i>=0;i--){
        for (int q=i;q!=0;q--){
            cout << "a";
        }
        cout << endl;
    }
    case 'c' : for (int i=a;i!=0;i--){
    for (int q = 0;q<i;q++){
        cout << " ";}

    for (int q = a-(i-1);q!=0;q--){
        cout << "*";}
        cout << endl;
    }

    }
    }

