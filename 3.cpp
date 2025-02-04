//To print the following pattern:
//EDCBA
//EDCBA
//EDCBA
//EDCBA
//EDCBA
#include<iostream>
using namespace std;

int main() {
    int n = 5;
    char i,j;
    for (int i = 'E'; i >='A' ; i--) 
    {
        for (int j = 'E'; j>='A' ; j--) 
        {
           cout<<char(j)<<"";
        }
        cout << endl;
    }

    return 0;
}
    