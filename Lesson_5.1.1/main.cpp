#include <iostream>

using namespace std;
void multiplication(int values[], int ValueSize, int multiplier){               // function for multiply the all massive values
    int answer =0; // for output massive
    for (int i=0;i<ValueSize;i++){
        answer= values[i]*multiplier;
        cout << answer << ", " ;
    }
}
int main()
{
    int uvalues[30]; // massive for users values
    int umultiplier=0; // user's multiplier
    int usize =0; // user's massive size
    cout << "Enter size of your massive (max 30 values) : ";
    cin >> usize;

    for (int i=0;i<usize;i++){ // ask all massive values
        cout << i+1 << ". " << "Enter your number here : ";
        cin >> uvalues[i];
    }
    cout << "Enter here your multiplier : ";
    cin >> umultiplier;
    cout << "Your massive is : ";
    multiplication(uvalues, usize, umultiplier);


}
