#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; // для слов в строках
    int i=0,q=0; // инкрименты
    int lnumb=0; // самое большое число
    int raz=0;
    for (int i=0;i<100;i++)
        slovo[i]=0;
    cout << "Enter your line here (max 100 words) : ";
    cin.getline(slovo,100);
    i=0;
    while (slovo[i]!=0){
        if (slovo[i]!=' '){
            q++;
        }
        else {
            if (q>lnumb){
                lnumb=q;
                raz=i-lnumb;

            }
            q=0;
        }
        i++;
    }
    cout << "The largest word : ";
    for (int i=0;i<lnumb;i++){
        cout << slovo[raz];
        raz++;
    }
}
