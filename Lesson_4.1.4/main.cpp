#include <iostream>

using namespace std;

int main()
{
    char slovo[100];
    char dubslovo;                 // duplicate slovo[i]
    int numb[26];           //Massive for statistic
    for (int i=0;i<26;i++)
        numb[i]=0;
    int trashcounter=0,slovocounter=0,lettercounter=0,nextnumb=1;    //increments
    for (int i=0;i<100;i++){
        slovo[i]=0;
    }
    cout << "Enter your words : ";
    cin.getline(slovo,100);
    while (slovo[slovocounter]!=0){
        if (slovo[slovocounter]>'a'){
            slovo[slovocounter]-=32;   // This cycle make all words to uppercase
        }
        slovocounter++;
    }
    slovocounter=0;
    while (slovo[slovocounter]!=0){
        if (slovo[slovocounter]!=' '){
            while (slovo[trashcounter]!=0){
                if (slovo[trashcounter]==slovo[slovocounter]){        //this cycle counting number of all words in line and clearing trash letters
                    numb[lettercounter]++;
                    if (trashcounter!=slovocounter){
                        slovo[trashcounter]=' ';
                    }
                }
                trashcounter++;
            }
            trashcounter=0;
        }
        else {
            while (slovo[slovocounter]==' '){
                slovo[slovocounter]=slovo[slovocounter+nextnumb];
                slovo[slovocounter+nextnumb]=' ';
                nextnumb++;
            }
            nextnumb=1;
            slovocounter--;
            lettercounter--;
        }
        lettercounter++;
        slovocounter++;

    }

     for (int q =0; q< lettercounter;q++){
        for (int i =0; i< lettercounter;i++){
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
     for (int i=0;i<lettercounter;i++){
        cout << slovo [i] << " - " << numb[i] << endl;
     }
}
