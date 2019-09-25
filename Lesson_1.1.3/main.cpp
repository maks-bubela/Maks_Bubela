#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i=0;
    cout << "Insert the number : ";
    cin >> a;
    cout << "Insert the number : ";
    cin >> b;

    do
    {   if(i>1){
             cout << "You entered incorrect data\n try again" << endl;
               }
       cout << "If you want a sum of 2 numbers enter 1" <<endl;
       cout << "If you want a difference of 2 numbers enter 2" <<endl;
       cout << "If you want a multiplication of 2 numbers enter 3" <<endl;
       cout << "If you want a degree of 2 numbers enter 4 : ";
       cin >> c;

                 i=i+2;
    }while (c<1 || c>4);
    i=0;
    if (c==1)
        i=a+b;
    if (c==2)
        i=a-b;
    if (c==3)
        i=a*b;
    if (c==4)
        i=a/b;

        cout << "Answer : " << i;


}
