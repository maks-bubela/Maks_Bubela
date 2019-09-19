#include <iostream>

using namespace std;

int main()
{
    int number[3],a=0;
    for (int i=0;i<3;i++){
    cout << "What is your number : ";
    cin >> number[i];
    if(a<number[i])
        a=number[i];

    }

    cout << "The maximum number is : " << a;


}
