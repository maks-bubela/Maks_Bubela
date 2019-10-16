#include <iostream>

using namespace std;

int main()
{
    char slovo[100],slovo2[100]; // Massives for words
    for (int i=0;i<100;i++)
        slovo[i]=0;
    int i=0,q=0,k=0,b=0; // increments
    cout << "Enter here your 1 line : ";
    cin.getline(slovo,100);
    cout << "Enter here your 2 line : ";
    cin.getline(slovo2,100);
    while (slovo[i]!=0)
        i++;
    while (slovo2[q]!=0)
        q++;
    while (slovo[k]!=0){
        for (int l=0;l<q;l++){
            for (int b=0;b<i;b++){
                if(slovo[b]==slovo2[l]){            //here we deleted trash letters
                    slovo[b]=' ';
                }
            }
        }
        k++;
    }

    b=1;
    k=0;
    while (slovo[k]!=0){
        while (slovo[k]==' '){
            if (slovo[k+b]!=0){
                slovo[k]=slovo[k+b];            // here we deleted gups
                slovo[k+b]=' ';
                b++;
            }
            else
                break;
        }
        b=1;
        k++;
    }
    cout << "Your line is : " << slovo;
}

