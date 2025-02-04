//TO PRINT MAXIMUM OF TWO NUMBERS
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"ENTER VALUE OF a AND b "<<endl;
    cin >> a >> b;

    if (a >= b) {
        cout << "maximum number is " << a << endl;
    } 
    else {
        cout << "maximum number is " << b << endl;
    }

    return 0;
}
