#include <iostream>

using namespace std;

int main()
{
    char words[100];// Word which user enter
    int i=0; // increment
    for (int i=0;i<100;i++)
        words[i]=0;
    cout << "Enter your line : ";
    cin.getline(words,100);
    i=0;
    while (words[i]!=0){
        if (words[i]>='a' && words[i]<='z')             // here we make words from lower case to upper case
            words[i]-=32;
        i++;
    }

    cout << endl << "Your line : " << words;

}
