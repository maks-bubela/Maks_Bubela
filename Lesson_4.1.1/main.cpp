#include <iostream>

using namespace std;

int main()
{
    char slovo[100]; // massive for words in lines
    int maincount=0,words=0; // increments
    for (int i=0;i<100;i++)
        slovo[i]=0;
    cout << "Enter your line here (max 100 words) : ";
    cin.getline(slovo,100);

    while(slovo[maincount]!=0){
        if(((slovo[maincount]>='A' && slovo[maincount]<='Z') ||
           (slovo[maincount]>='a' && slovo[maincount]<='z')) &&
            ((slovo[maincount+1]<='A' || slovo[maincount+1]>='z') ||
           (slovo[maincount+1]<='a' && slovo[maincount+1]>='Z')))
           words++;
        maincount++;
    }
    cout << "The number of words in your line : " << words ;
}
