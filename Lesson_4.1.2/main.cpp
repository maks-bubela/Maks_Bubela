#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; // massive for words in lines
    int i=0,q=0; // increments
    int lnumb=0; // The largest number
    int raz=0; // difference between increment i and largest number
    for (int i=0;i<100;i++)
        slovo[i]=0;
    cout << "Enter your line here (max 100 words) : ";
    cin.getline(slovo,100);
    i=0;
    while (slovo[i]!=0){
        if (slovo[i]!=' '){
            q++;
        }
        else {
            if (q>lnumb){
                lnumb=q;
                raz=i-lnumb;

            }
            q=0;
        }
        i++;
    }
    cout << "The largest word : ";
    for (int i=0;i<lnumb;i++){
        cout << slovo[raz];
        raz++;
    }
}
