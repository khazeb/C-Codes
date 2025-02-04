// TO PRINT"SIMPLE INTEREST CALCULATOR"
#include<iostream>
using namespace std;

int main()
{
    int P ,R ,T;
    cout<<"Enter Value of P,R,T "<<endl;
    cin >> P >> R >> T;
    int SI= (P * R * T)/100;
    cout <<"The value of SI is " << SI<< endl;
    
    return 0;
}