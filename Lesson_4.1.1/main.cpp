#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; // massive for words in lines
    int i=0,b=0,k=1; // increments
    char letters[64];  // massive for letters
    int uppercase=65,lowercase=97; // variable for value letters in ascii code
    for (int i=0;i<='A';i++){
        if (i<='Z'){
            letters[i]=uppercase;               // cycle give to massive letters value letters in ascii code
            uppercase++;
        }
        if (i>'Z'){
            letters[i]=lowercase;
            lowercase++;
        }
    }
    for (int i=0;i<100;i++)
        slovo[i]=0;
    cout << "Enter your line here (max 100 words) : ";
    cin.getline(slovo,100);
    i=1;
    while (slovo[i]!=0){
        for (int q=0;q<='A';q++){
            if (slovo[i]==letters[q]){              // here we check whether this variable is a letter
                b=1;
                break;
            }
        }
        if (b!=1){
            for (int q=0;q<'A';q++){
                if (slovo[i-1]==letters[q]){
                    int a=i;
                    while (slovo[a]!=0){
                        for (int j=0;j<'A';j++){
                            if (slovo[a]==letters[j]){                  // here we check how much words in a line
                                b=1;
                                break;
                            }
                            else
                                b=0;
                        }
                        if (b==1){
                            k++;
                            break;
                        }
                        a++;
                    }
                }

            }
        }
        b=0;
        i++;
    }
    cout << "The number of words in your line : " << k ;
}
