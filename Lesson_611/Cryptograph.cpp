#include <Cryptograph.h>
using namespace std;
Cryptographer::Cryptographer(){



    strcpy(text,"Hello world");
    cout << CesCrypt() << endl;
    cout << CesDecrypt() << endl;
    srand(time(0));
    ceskey=1+ (rand() %26);
    strcpy(vigkey,"megaban");
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
    if (choice==0)
        CesDecrypt();
}
Cryptographer::Cryptographer(char text[], char vigkey[]){
    for (int counter=0;counter<100;counter++)
        this->text[counter] = text[counter];
    for (int i=0;i<25;i++)
        this->vigkey[i] = vigkey[i];
    cout << "You want : crypt(1) decrypt(0) : ";
    cin >> choice;
    if (choice==1)
        VigCrypt();
    if (choice==0)
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
    ShowInfo();
}
string Cryptographer::CesDecrypt(){
    int i=0;
    while(text[i]!=0){
        text[i]=text[i]-ceskey;                     //description Caesar decryption
        if (text[i]<97)
            text[i]=text[i]+26;
        i++;
    }
    ShowInfo();

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
        keycount++;
    }
    ShowInfo();
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
        keycount++;
    }
    ShowInfo();
}
void Cryptographer::ShowInfo(){
    cout << "---------------------" << endl;
    if (choice==1)
        cout << "Crypt text is : " << text << endl;             //description show info function
    if (choice==0)
        cout << "Decrypt text is : " << text << endl;
}
