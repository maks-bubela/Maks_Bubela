#include <iostream>
#include <math.h>


using namespace std;
int x; // user's value1
int y; // user's value2
int result;
int inputing(){
    int value1,value2;
    cout << "Enter here first number : ";
    cin >> value1;
    cout << "Enter here second number : ";
    cin >> value2;
    x=value1;
    y=value2;
}
void summ(int value1,int value2){
    result=value1+value2;
}
void subtraction(int value1,int value2){
    result=value1-value2;
}
void multiplicate(int value1,int value2){
    result=value1*value2;
}
void division(int value1,int value2){
    result=value1/value2;
}
void radical(int value1,int value2){
    result=sqrt(value1+value2);
}
void exponention(int value1,int value2){
    result=pow(value1,value2);
}

int main()
{
    int choice; // identification code of function

    cout << "Enter here which function you want to use"
    "\n1. Summ"
    "\n2. Subtraction"
    "\n3. Multiplicate"
    "\n4. Division"
    "\n5. Dadical"
    "\n6. Exponention"
    "\nYour choice : ";
    cin >> choice;
    if (choice==6)
        cout << "First number - number second number - exponent" << endl;
    inputing();
    switch (choice){
    case 1:
        summ(x,y);
        break;
    case 2:
        subtraction(x,y);
        break;
    case 3:
        multiplicate(x,y);
        break;
    case 4:
        division(x,y);
        break;
    case 5:
        radical(x,y);
        break;
    case 6:
        exponention(x,y);
        break;
    }
    cout << "Result : " << result;
}
