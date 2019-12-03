#include <iostream>
#include <string.h>
#include <time.h>
#include <random>
#include <Cryptograph.h>
using namespace std;



int main()
{
    char utext[100];               //user text
    int uceskey;                  //user Caesar key
    char uvigkey[25];            //user Vigener key
    int choice=0;                 //user method choice

    cout << "Enter here your text : ";
    cin.getline(utext,100);
    cout << "Which method you want to use Cesar (1) Vigener (0) : ";
    cin >> choice;
    if (choice==1){
        cout << "Enter here your key : ";
        cin >> uceskey;
        Cryptographer crypt(utext,uceskey);
    }
    else if (choice==0){
        cout << "Enter here your key : ";
        cin.getline(uvigkey,25);
        cin.getline(uvigkey,25);
        Cryptographer crypt(utext,uvigkey);

    }
    return 0;
}
