#include <iostream>
#include <string.h>
#include <time.h>
#include <random>

using namespace std;

class Cryptographer{
public:
    int counter=0;
    int choice =0;
    Cryptographer();
    Cryptographer(char text[], int ceskey);                              //constractor
    Cryptographer(char text[], char vigkey[]);

    //////////////////////////////////////////////////////////////////////////////////////////////
    void setText(char text[100]){
        for (int i=0;i<100;i++)
            this->text[i] = text[i];
    }
    void setVigKey(char vigkey[25]){
        for (int i=0;i<25;i++)
            this->vigkey[i] = vigkey[i];                            // setters
    }
    void setCesKey(int ceskey){
        ceskey=1+ceskey %26;
        this->ceskey = ceskey;
    }
    void setCrypto(bool crypto){
        this->crypto=crypto;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////
    string getText(){
        return(text);
    }
    string getVigKey(){
        return(vigkey);                                             //getters
    }
    int getCesKey(){
        return(ceskey);
    }
    bool getCrypto(){
        return(crypto);
    }


    string CesCrypt();
    string CesDecrypt();
    string VigCrypt();
    string VigDecrypt();                    //Function
    void ShowInfo();



private:
    char text[100];
    char vigkey[25];
    int ceskey;
    bool crypto;
};
//////////////////////////////////////////////////////////////////////////////////////////////
Cryptographer::Cryptographer(){



    strcpy(text,"Hello world");
    srand(time(0));
    ceskey=1+ (rand() %26);
    strcpy(vigkey,"megaban");
    cout << CesCrypt() << endl;
    cout << CesDecrypt() << endl;
    cout << VigCrypt() << endl;


}
Cryptographer::Cryptographer(char text[], int ceskey){


    for (int counter=0;counter<100;counter++)
        this->text[counter] = text[counter];
    ceskey=ceskey %26;
    this->ceskey=ceskey;
    cout << "You want : crypt(1) decrypt(0) : ";                        //description of constractor
    cin >> choice;
    if (choice==1)
        CesCrypt();
    else if (choice==0)
        CesDecrypt();
}
Cryptographer::Cryptographer(char text[], char vigkey[]){
    for (int counter=0;counter<100;counter++)
        this->text[counter] = text[counter];
    for (int i=0;i<25;i++)
        this->vigkey[i] = vigkey[i];
    cout << "You want : crypt(1) decrypt(0) : ";
    cin >> choice;
    if (choice)
        VigCrypt();
    else if (choice==0)
        VigDecrypt();
}
//////////////////////////////////////////////////////////////////////////////////////////////
string Cryptographer::CesCrypt(){
    int i=0;
    while(text[i]!=0){
        text[i]=text[i]+ceskey;             //description Caesar encryption
        if (text[i]>122)
            text[i]=text[i]-26;
        i++;

    }
}
string Cryptographer::CesDecrypt(){
    int i=0;
    while(text[i]!=0){
        text[i]=text[i]-ceskey;                     //description Caesar decryption
        if (text[i]<97)
            text[i]=text[i]+26;
        i++;

    }

}
string Cryptographer::VigCrypt(){
    int keycount=0;
    int i=0;
    while(text[i]!=0){
        if (vigkey[keycount]==0)
            keycount=0;
        text[i]=((text[i]+vigkey[keycount])%26)+97;                 //description Vigener encryption
        if (text[i]>122)
            text[i]=text[i]-26;
        i++;
    }
}
string Cryptographer::VigDecrypt(){
    int keycount=0;
    int i=0;
    while(text[i]!=0){
        if (vigkey[keycount]==0)
            keycount=0;
        text[i]=(((text[i]+26)-vigkey[keycount])%26)+97;                //description Vigener decryption
        if (text[i]>122)
            text[i]=text[i]-26;
        i++;
    }
}
void Cryptographer::ShowInfo(){
    cout << "---------------------" << endl;
    if (choice)
        cout << "Crypt text is : " << text << endl;             //description show info function
    else if (choice==0)
        cout << "Decrypt text is : " << text << endl;
}
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
        crypt.ShowInfo();  // tuta oshibka
    }
    else if (choice==0){
        cout << "Enter here your key : ";
        cin.getline(uvigkey,100);
        Cryptographer crypt(utext,uvigkey);
        crypt.ShowInfo();// i tuta
    }





    return 0;
}
