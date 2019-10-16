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
    int eatposy,eatposx; // coordinates of eat
    int ctail=0; // counter for tail
    int stail=0; // size tail
    int tailposx[25],tailposy[50]; //coordinates of tail
    int tail[1250];


    srand(time(0));
    pposx=1+ rand()%49;                 // here we make random x and y for user character
    pposy=1+ rand()%24;
    eatposx=1+ rand()%49;                 // here we make random x and y for eat
    eatposy=1+ rand()%24;
        while(1){
            system("cls");              //clear screen
            while (pposx==eatposx && pposy==eatposy){
                eatposx=1+ rand()%49;                 // here we make random x and y for eat
                eatposy=1+ rand()%24;
                ctail=1;
            }
            if (ctail==1){
                ctail=0;
                stail++;
                tail[stail];

            }
            for (int i=0;i<sz1;i++){                        // in this cycle we make map, the borders of map and user character
                for (int q=0;q<sz2;q++){
                    if (q==0                                            // position of boards
                        ||q==sz2-1
                        ||i==0
                        ||i==sz1-1){
                    pmap[i][q]='@';
                    }
                    else if (q==pposx && i==pposy){                       // position of snake
                        pmap[i][q]='T';
                    }
                    else if (q==eatposx && i==eatposy)                  //position of eat
                        pmap[i][q]='o';
                    else {
                        pmap[i][q]=' ';
                    }
                }
            }

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
                        newposy--;
                        pposy=newposy;
                        break;
                    case 2:
                        newposy++;
                        pposy=newposy;                    // in this switch we check what character must to do
                        break;
                    case 4:
                        newposx--;
                        pposx=newposx;
                        break;
                    case 6:
                        newposx++;
                        pposx=newposx;
                        break;
                    case 0:
                        return(0);
                }
                if(newposx==0){
                    newposx=sz2-1;
                    pposx=newposx;
                }
                else if(newposy==0){                    //here we check whether the snake went abroad
                    newposy=sz1-1;
                    pposy=newposy;
                }
                else if(newposx==sz2){
                    newposx=sz2-(sz2-1);
                    pposx=newposx;
                }
                else if(newposy==sz1){
                    newposy=sz1-(sz1-1);
                    pposy=newposy;
                }

            }
}
