#include <iostream>

using namespace std;

int main()
{
    char slovo[100];
    char dubslovo;                 // duplicate slovo[i]
    int numb[26];           //Massive for statistic
    for (int i =0;i<26;i++)
        numb[i]=0;
    int q=0,i=0,b=0,c=1;    //increments
    for (int i=0;i<100;i++){
        slovo[i]=0;
    }
    cout << "Enter your words : ";
    cin.getline(slovo,100);
    while (slovo[i]!=0){
        if (slovo[i]>'a'){
            slovo[i]-=32;   // This cycle make all words to uppercase
        }
        i++;
    }
    i=0;
    while (slovo[i]!=0){
        if (slovo[i]!=' '){
            while (slovo[q]!=0){
                if (slovo[q]==slovo[i]){        //this cycle counting number of all words in line and clearing trash letters
                    numb[b]++;
                    if (q!=i){
                        slovo[q]=' ';
                    }

                }
                q++;

            }
            q=0;

        }

        else {
            while (slovo[i]==' '){
                slovo[i]=slovo[i+c];
                slovo[i+c]=' ';
                c++;

            }
            c=1;
            i--;
            b--;
        }
        b++;
        i++;

    }

     for (int q =0; q< b;q++){
        for (int i =0; i< b;i++){
            if (numb[i]<numb[q]){
                c=numb[i];
                numb[i]=numb[q];            //This cycle make statistic
                numb[q]=c;
                dubslovo=slovo[i];
                slovo[i]=slovo[q];
                slovo[q]=dubslovo;
            }
        }
     }

     for (int i=0;i<b;i++){
        cout << slovo [i] << " - " << numb[i] << endl;
     }

}
