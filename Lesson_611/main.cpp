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
    Cryptographer(char text[100], int ceskey);
    Cryptographer(char text[100], char vigkey[25]);

//////////////////////////////////////////////////////////////////////////////////////////////
    void setText(char text[100]){
        for (int i=0;i<100;i++)
            this->text[i] = text[i];
    }
    void setVigKey(char vigkey[25]){
        for (int i=0;i<25;i++)
            this->vigkey[i] = vigkey[i];
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
        return(vigkey);
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
    string VigDecrypt();
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
    ceskey=1+ rand() %26;
    strcpy(vigkey,"megaban");
    cout << CesCrypt() << endl;
    cout << CesDecrypt() << endl;
    cout << VigCrypt() << endl;


}
Cryptographer::Cryptographer(char text[100], int ceskey){
    for (int counter=0;counter<100;counter++)
        this->text[counter] = text[counter];
    ceskey=1+ceskey %26;
    this->ceskey=ceskey;
    cout << "You want : crypt(1) decrypt(0) : ";
    cin >> choice;
    if (choice)
        CesCrypt();
    else if (choice==0)
        CesDecrypt();
}
Cryptographer::Cryptographer(char text[100], char vigkey[25]){
    for (int counter=0;counter<100;counter++)
        this->text[counter] = text[counter];
    for (int counter=0;counter<25;counter++)
        this->vigkey[counter] = vigkey[counter];
    cout << "You want : crypt(1) decrypt(0) : ";
    cin >> choice;
    if (choice)
        VigCrypt();
    else if (choice==0)
        VigDecrypt();
}
//////////////////////////////////////////////////////////////////////////////////////////////
string Cryptographer::CesCrypt(){
        for (int i=0;i<counter;i++){
            text[i]=text[i]+ceskey;
            if (text[i]>122)
                text[i]=text[i]-26;
        }
}
string Cryptographer::CesDecrypt(){
    for (int i=0;i<counter;i++){
        text[i]=text[i]-ceskey;
        if (text[i]<97)
            text[i]=text[i]+26;

    }

}
string Cryptographer::VigCrypt(){
    int keycount=0;
    for (int i=0;i<counter;i++){
        if (vigkey[keycount]==0)
            keycount=0;
        text[i]=((text[i]+vigkey[keycount])%26)+97;
        if (text[i]>122)
            text[i]=text[i]-26;
    }
}
string Cryptographer::VigDecrypt(){
    int keycount=0;
    for (int i=0;i<counter;i++){
        if (vigkey[keycount]==0)
            keycount=0;
        text[i]=(((text[i]+26)-vigkey[keycount])%26)+97;
        if (text[i]>122)
            text[i]=text[i]-26;
    }
}
void Cryptographer::ShowInfo(){
    cout << "---------------------" << endl;
    if (choice)
        cout << "Crypt text is : " << text << endl;
    else if (choice==0)
        cout << "Decrypt text is : " << text << endl;
}
int main()
{
    char utext[100];
    int uceskey;
    char uvigkey[25];
    int choice;
    Cryptographer crypt;
    cout << "Enter here your text : ";
    cin.getline(utext,100);
    cout << "Which method you want to use Cesar (1) Vigener (0) : ";
    cin >> choice;
    if (choice){
        cout << "Enter here your key : ";
        cin >> uceskey;
        crypt(utext[100],uceskey);
    }
    else if (choice==0){
        cout << "Enter here your key : ";
        cin.getline(uvigkey,25);
        crypt(utext[100],uvigkey[25]);
    }





    return 0;
}
