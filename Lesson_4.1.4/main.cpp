#include <iostream>

using namespace std;

int main()
{
    char slovo[100];
    char dubslovo;                 // duplicate slovo[i]
    int numb[26];           //Massive for statistic
    for (int i=0;i<26;i++)
        numb[i]=0;
    int trashcounter=0,checkcount=0,nextnumb=1;    //increments
    for (int i=0;i<100;i++){
        slovo[i]=0;
    }
    cout << "Enter your words : ";
    cin.getline(slovo,100);
    while (slovo[checkcount]!=0){
        if (slovo[checkcount]>'a'){
            slovo[checkcount]-=32;   // This cycle make all words to uppercase
        }
        checkcount++;
    }
    checkcount=0;
    while (slovo[checkcount]!=0){
        if (slovo[checkcount]!=' '){
            while (slovo[trashcounter]!=0){
                if (slovo[trashcounter]==slovo[checkcount]){        //this cycle counting number of all words in line and clearing trash letters
                    numb[checkcount]++;
                    if (trashcounter!=checkcount){
                        slovo[trashcounter]=' ';
                    }
                }
                trashcounter++;
            }
            trashcounter=0;
        }
        else {
            while (slovo[checkcount]==' '){
                slovo[checkcount]=slovo[checkcount+nextnumb];
                slovo[checkcount+nextnumb]=' ';
                nextnumb++;
            }
            nextnumb=1;
            checkcount--;

        }
        checkcount++;


    }

     for (int q =0; q< checkcount;q++){
        for (int i =0; i< checkcount;i++){
            if (numb[i]<numb[q]){
                nextnumb=numb[i];
                numb[i]=numb[q];            //This cycle make statistic
                numb[q]=nextnumb;
                dubslovo=slovo[i];
                slovo[i]=slovo[q];
                slovo[q]=dubslovo;
            }
        }
     }
     for (int i=0;i<checkcount;i++){
        cout << slovo [i] << " - " << numb[i] << endl;
     }
}
