#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; // massive for words in lines
    int i=0,q=1; // increments
    for (int i=0;i<100;i++)
        slovo[i]=0;
    cout << "Enter your line here (max 100 words) : ";
    cin.getline(slovo,100);
    i=1;
    while (slovo[i]!=0){
        if (slovo[i] ==' '&& slovo[i-1]!=' ')
            q++;
        i++;
    }
    cout << "The number of words in your line : " << q ;
}
