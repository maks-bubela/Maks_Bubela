#include <iostream>

using namespace std;

int main()
{
    char bukva;// буква которую вводит пользователь
    char bukva1; // буква в верхнем регистре
    cout << "Enter your letter : ";
    cin >> bukva;
    bukva1=bukva-32;
    cout << endl << "Your letter : " << bukva1;

}
