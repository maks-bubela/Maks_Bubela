#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; // massive for words in lines
    int i=0,k=0; // increments
    int lnumb=0; // The largest number
    int raz=0; // difference between increment i and largest number
    for (int i=0;i<100;i++)
        slovo[i]=0;
    cout << "Enter your line here (max 100 words) : ";
    cin.getline(slovo,100);
    i=0;
    while (slovo[i]!=0){

        if ((slovo[i]>='A' && slovo[i]<='Z')||
            (slovo[i]>='a' && slovo[i]<='z')) // here we check whether this variable is a letter
            k++;
        else {
            if (k>lnumb){                       //here we check the largest word with other words
                lnumb=k;
                raz=i-lnumb;
            }
            k=0;
        }
        if (slovo[i+1]==0) {
            if (k>lnumb&&slovo[i+1]==0){                       //here we check the largest word with other words
                lnumb=k;
                raz=i-lnumb;
            }
            k=0;
        }
        i++;
    }
    cout << "The largest word : ";
    for (int i=0;i<lnumb;i++){                      // output the largest number
        cout << slovo[raz];
        raz++;
    }
}
