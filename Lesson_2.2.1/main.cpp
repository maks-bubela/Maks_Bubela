#include <iostream>

using namespace std;

int main()
{
    int a[10],b;
    for (int i=0;i<10;i++){
        cout << "Enter number of school : ";
        cin >> a[i];
    }
    cout << "Enter number of your school : ";
        cin >> b ;
    for (int i=0;i<10;i++){
        if (a[i]==b){
            cout << "I know this school!";
            break;}
            else if (i==9)
                cout << "I dont know this school!";


    }
}
