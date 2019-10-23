#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; // massive for words in lines
    int maincount=1,checkw=0,words=0; // increments
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

    while (slovo[maincount]!=0){
        for (int q=0;q<='A';q++){
            if (slovo[maincount]==letters[q]){              // here we check whether this variable is a letter
                checkw=1;
                break;
            }
        }
        if (checkw!=1){
            for (int q=0;q<'A';q++){
                if (slovo[maincount-1]==letters[q]){
                    int a=maincount;
                    while (slovo[a]!=0){
                        for (int j=0;j<'A';j++){
                            if (slovo[a]==letters[j]){                  // here we check how much words in a line
                                checkw=1;
                                break;
                            }
                            else
                                checkw=0;
                        }
                        if (checkw==1){
                            words++;
                            break;
                        }
                        a++;
                    }
                }
            }
        }
        else if (words==0 && checkw==1)
            words++;
        checkw=0;
        maincount++;


    }
    cout << "The number of words in your line : " << words ;
}
