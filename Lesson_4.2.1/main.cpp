#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; //Massive for words
    char dubslovo;   //duplicate
    for (int i =0;i<100;i++)
        slovo[i]=0;
    cout << "Enter your words : ";
    cin.getline(slovo,100);
    int i =0,q=1; // increments
    while (slovo[i]!=0){
        while (slovo[i]==' '){
                slovo[i]=slovo[i+q];            // in this cycle we deleting all gups
                slovo[i+q]=' ';
                q++;
        }
        q=1;
        i++;
    }
    for (int k=0;k<=i;k++){
        if (slovo[k]==slovo[i-1]||i==k){
            if (k==i-1 && slovo[i-1]==slovo[k])
                cout << "This line is palindrome! : " << slovo;                 // in this cycle we check our line for palindrome

        }
        else{
            cout << "This line isn't palindrome! : " << slovo;
            break;
        }
        i--;
    }

}

