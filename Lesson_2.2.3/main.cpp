#include <iostream>

using namespace std;

int main()
{
    int a[20],b=0,probel=0;
    cout << "WARNING \n"
    "This program take only odd number \n"
    "If you give even number program will show tree and close up "<< endl;
    for (int i=0;i<20;i++){
        cout << "Number : ";
        cin >> a[i];
        if (a[i]%2==0)
            a[i]=0;
        if (a[i]==0)
            break;
        if (a[i]>b)
            b=a[i];
    }
    for (int i=0;i<20;i++){
        if (a[i]==0)
            break;
        probel = b-(a[i]/2);
        for (int q=0;q<probel;q++){
            cout << " ";
        }
        for (int q=0;q<a[i];q++){
            cout << "*";
        }
    cout << endl;
    }
}
