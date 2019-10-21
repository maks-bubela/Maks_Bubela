#include <iostream>

using namespace std;

int main()
{
    char slovo[100],slovo2[100]; // Massives for words
    for (int i=0;i<100;i++)
        slovo[i]=0;
    int counter1=0,counter2=0,maincount=0,minorcount=0,a=0,usedlet=0; // increments
    cout << "Enter here your 1 line : ";
    cin.getline(slovo,100);
    cout << "Enter here your 2 line : ";
    cin.getline(slovo2,100);
    while (slovo[counter1]!=0)
        counter1++;
    while (slovo2[counter2]!=0)
        counter2++;
    while (slovo[maincount]!=0){
        for (int l=usedlet;l<counter2;l++){
            for (int b=0;b<counter1;b++){
                if(slovo[b]==slovo2[l]){            //here we deleted trash letters
                    slovo[b]=' ';
                    a=1;
                    usedlet++;
                    break;
                }
            }
            if (a==1)
                break;
        }
        a=0;
        maincount++;
    }

    minorcount=1;
    maincount=0;
    while (slovo[maincount]!=0){
        while (slovo[maincount]==' '){
            if (slovo[maincount+minorcount]!=0){
                slovo[maincount]=slovo[maincount+minorcount];            // here we deleted gups
                slovo[maincount+minorcount]=' ';
                minorcount++;
            }
            else
                break;
        }
        minorcount=1;
        maincount++;
    }
    cout << "Your line is : " << slovo;
}

