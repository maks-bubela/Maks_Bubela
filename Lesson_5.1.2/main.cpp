#include <iostream>
#include <ctime>
using namespace std;
void game(int dice, int verdice){
    int allpoints=0; // numbers of all points
    int points=0; // number points from 1 dice
    for (int i=0;i<dice;i++){ // in this cycle we randomize all dice and count all points
        points=1+rand()%verdice;
        allpoints+=points;
    }
    cout << "The number of your points is : " << allpoints << "!";
}
int main()
{
    srand(time(0));
    int udice; // user's number of dice
    int uverdice; // user's number of verge of dice
    cout << "Enter here number of dice : ";
    cin >> udice;
    cout << "Enter here number of verge of dice : ";
    cin >> uverdice;
    game(udice, uverdice);
}
