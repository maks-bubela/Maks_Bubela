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
