//To print the following pattern:
//EEEEE
//DDDDD
//CCCCC
//BBBBB
//AAAAA
#include<iostream>
using namespace std;

int main() {
    int n = 5;
    char i,j;
    for (int i = 'E'; i >='A' ; i--) 
    {
        for (int j = 'E'; j>='A' ; j--) 
        {
           cout<<char(i)<<"";
        }
        cout << endl;
    }

    return 0;
}
    