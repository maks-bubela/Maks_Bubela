#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    char pmap[25][50]; //Massive for map
    int pposx,pposy; // coordinates of user character
    int newposx,newposy; // new coordinates of user character
    int sz1=25,sz2=50; // size counter for map


    srand(time(0));
    pposx=1+ rand()%49;                 // here we make random x and y for user character
    pposy=1+ rand()%24;

    newposx=pposx;
    newposy=pposy;

    for (int i=0;i<sz1;i++){
        for (int q=0;q<sz2;q++){
            if (q==0
                ||q==sz2-1
                ||i==0
                ||i==sz1-1){
            pmap[i][q]='@';
            }
            else if (q==pposx && i==pposy){                       // in this cycle we make map, the borders of map and user character
                pmap[i][q]='T';
            }
            else {
                pmap[i][q]=' ';
            }
        }
    }
    while(1){
        system("cls");              //clear screen
        for (int i=0;i<sz1;i++){
            for (int q=0;q<sz2;q++){            // in this cycle we outputing the map
                cout << pmap[i][q];
            }
        cout << endl;
        }
        int action;
        cout << "\n\n > ";
        cin >> action;               // here we ask user about what he want to do
        newposx=pposx;
        newposy=pposy;

        switch (action) {
            case 8:
                newposy++;
                break;;
            case 2:
                newposy--;                      // in this switch we check what character must to do
                break;
            case 4:
                newposx--;
                break;
            case 6:
                newposx++;
                break;
            case 0:
                return(0);
        }
        if(newposx==0){
            newposx=sz1-1;
            pposx=newposx;
        }
        else if(newposy==0){
            newposy=sz2-1;
            pposy=newposy;
        }
        else if(newposx==sz1){
            newposx=sz1-(sz1-1);
            pposx=newposx;
        }
        else if(newposy==sz2){
            newposy=sz2-(sz2-1);
            pposy=newposy;
        }

    }
}
