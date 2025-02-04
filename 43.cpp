 // TO PRINT "MULTIPLICATION TABLE GENERATOR"
#include<iostream>
using namespace std;

int main()
{
int a;
int n=10;
cout<<"enter value of a: ";
cin>>a;
for(int i=1;i<=n;i++){
 cout << a <<" * "<< i <<" = "<< a*i << endl;
 }
    return 0;
}