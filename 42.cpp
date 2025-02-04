//"Enter a number to generate its multiplication table:"
#include<iostream>
using namespace std;

int main()
{
int a ;
 
cout<<"enter number for multiplication"<<endl;
cin>>a;
for(int b=1;b<=10;b++)
    cout <<a<<"*"<<b<<"="<<a*b<<endl;
    return 0;
}