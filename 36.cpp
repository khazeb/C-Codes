//TO PRINT MINIMUM OF 3 NUMBERS
#include<iostream>
using namespace std;

int main()
{
int a , b , c;
cout<<"Enter value "<<endl;
cin>>a>>b>>c;
    if (a<b && a<c){
    cout<<"Minimum number is "<< a <<endl;}
    else if(b<a && b<c){
    cout<<"Minimum number is "<< b <<endl;}
    else
    cout<<"Minimum number is "<< c <<endl;
    
    return 0;
}