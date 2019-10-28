#include <iostream>
#include <math.h>


using namespace std;

int inputing1(){
    int value1;
    cout << "Enter here first number : ";
    cin >> value1;
    return(value1);
}
int inputing2(){
    int value2;

    cout << "Enter here second number : ";
    cin >> value2;
    return(value2);
}
int summ(int value1,int value2){
    int result;
    result=value1+value2;
    return (result);
}
int subtraction(int value1,int value2){
    int result;
    result=value1-value2;
    return (result);
}
int multiplicate(int value1,int value2){
    int result;
    result=value1*value2;
    return (result);
}
int division(int value1,int value2){
    int result;
    result=value1/value2;
    return (result);
}
float radical(int value1,int value2){
    float result;
    result=sqrt(value1+value2);
    return (result);
}
int exponention(int value1,int value2){
    int result;
    result=pow(value1,value2);
    return (result);
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
    switch (choice){
    case 1:
        cout << summ(inputing1(),inputing2());
        break;
    case 2:
        cout << subtraction(inputing1(),inputing2());
        break;
    case 3:
        cout << multiplicate(inputing1(),inputing2());
        break;
    case 4:
        cout << division(inputing1(),inputing2());
        break;
    case 5:
        cout << radical(inputing1(),inputing2());
        break;
    case 6:
        cout << exponention(inputing1(),inputing2());
        break;
    }

}
