#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; // massive for words in lines
    int i=0,q=0,k=0,b=0; // increments
    int lnumb=0; // The largest number
    int raz=0; // difference between increment i and largest number
    char letters[64];  // massive for letters
    int uppercase=65,lowercase=97; // variable for value letters in ascii code
    for (int i=0;i<=64;i++){
        if (i<=32){
            letters[i]=uppercase;               // cycle give to massive letters value letters in ascii code
            uppercase++;
        }
        if (i>32){
            letters[i]=lowercase;
            lowercase++;
        }
    }
    for (int i=0;i<100;i++)
        slovo[i]=0;
    cout << "Enter your line here (max 100 words) : ";
    cin.getline(slovo,100);
    i=0;
    while (slovo[i]!=0){
        for (int q=0;q<=64;q++){
            if (slovo[i]==letters[q]){              // here we check whether this variable is a letter
                b=1;
                break;
            }
        }
        if (b==1)                   // here we consider how big a word
          k++;
        else {
            if (k>lnumb){                       //here we check the largest word with other words
                lnumb=k;
                raz=i-lnumb;
            }
            k=0;
        }
        b=0;
        i++;
    }
    cout << "The largest word : ";
    for (int i=0;i<lnumb;i++){                      // output the largest number
        cout << slovo[raz];
        raz++;
    }
}
