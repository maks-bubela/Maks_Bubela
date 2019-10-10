#include <iostream>

using namespace std;

int main()
{
    char slovo[100],slovo2[100];
    for (int i=0;i<100;i++)
        slovo[i]=0;
    int i=0,q=0,k=0,b=0;
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
                if(slovo[b]==slovo2[l]){
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


                slovo[k]=slovo[k+b];
                slovo[k+b]=' ';
                b++;
        }
        b=1;
        k++;
    }
    cout << "Your line is : " << slovo;


}

/* for (int k=0;k<i;k++){
        if (slovo[k]==' ')
    }*/
