#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; // massive for words in lines
    int i=0,k=0; // increments
    int lnumb=0; // The largest number
    int raz=0; // difference between increment i and largest number
    int cletter[4]; // ascii counter for letters
    cletter[0]=65;
    cletter[1]=90;
    cletter[2]=97;
    cletter[3]=122;
    for (int i=0;i<100;i++)
        slovo[i]=0;
    cout << "Enter your line here (max 100 words) : ";
    cin.getline(slovo,100);
    i=0;
    while (slovo[i]!=0){

        if ((slovo[i]>=cletter[0] && slovo[i]<=cletter[1])||
            (slovo[i]>=cletter[2] && slovo[i]<=cletter[3])) // here we check whether this variable is a letter
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
