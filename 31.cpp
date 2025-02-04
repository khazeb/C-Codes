// TO PRINT DIFFERENCE OF 2 NUMBERS USING FUNCTION
#include<iostream>
using namespace std;

int difference (int a,int b)
{
    return a-b;
}
   int main (){
   int a,b;
   cout<<"enter value of a and b ";
   cin>>a>>b;
   
   cout<<"difference is "<<difference (a,b)<<endl;
   
   return a-b;}