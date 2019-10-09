#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    char karta[25][50];
    int sz1=25,sz2=50;
    int x,y;
    srand(time(0));
    x=1+ rand()%49;
    y=1+ rand()%24;
    cout << x << " " << y << endl;


    for (int i=0;i<sz1;i++){
        for (int q=0;q<sz2;q++){
            if (q==0||q==sz2-1||i==0||i==sz1-1){
            karta[i][q]='@';
            }
            else if (q==x&&i==y){
                karta[i][q]='T';
            }
            else {
                karta[i][q]=' ';
            }
        }
    }
    for (int i=0;i<sz1;i++){
        for (int q=0;q<sz2;q++){
            cout << karta[i][q];
        }
        cout << endl;
    }
    return 0;
}
