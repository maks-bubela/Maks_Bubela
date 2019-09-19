#include <iostream>

using namespace std;

int main()
{
    int Salary[3],a=0,b,razniza;
    for (int i=0;i<3;i++){
    cout << "What is your salary? : ";
    cin >> Salary[i];
    if(a<Salary[i])
        a=Salary[i];
    if (b>Salary[i])
        b=Salary[i];
    }
    razniza = a-b;
    cout << "The difference between the maximum and minimum wages is : " << razniza;


}
