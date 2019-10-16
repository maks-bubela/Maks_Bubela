#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; //Massive for words
    char dubslovo; // duplicate slovo[i]
    for (int i=0;i<100;i++)
        slovo[i]=0;
    int q=0; // increment
    cout << "Enter your words : ";
    cin.getline(slovo,100);
    while (slovo[q]!=0)
        q++;
    for (int i=0;i<q;i++){
        if (slovo[0]==' ' && slovo[i+1]!=0){
            for(int k=0;k<q;k++){
                dubslovo=slovo[k];                  //in this cycle we deleted all gups in begin
                slovo[k]=slovo[k+1];
                slovo[k+1]=dubslovo;
            }
        }
    }
    for (int i=0;i<q;i++){
        while ((slovo[i]==' ' && slovo[i+1]==' ') ||
               (slovo[i]==' ' && slovo[i+1]==0)){
            for(int k=1;k<q;k++){
                dubslovo=slovo[i+k];
                slovo[i+k]=slovo[i+k+1];                    //in this cycle we normalize all line
                slovo[i+k+1]=dubslovo;
                if (slovo[i]==' ' && slovo[i+1]==0){
                    slovo[i]=0;
                }
            }
        }
    }
    cout << "Your line is : " << slovo;
}
