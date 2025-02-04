    // To print Dynamic Array Input and Output Program
    // This program allows the user to input a dynamic number of elements
    // into an array and then displays each element with its index
#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter the number of elements: "<<endl;
cin>>n;
int number [n];
cout<<"enter the numbers "<<n<<endl;
for(int i=0;i<n;i++){
cin >>number[i];
}
cout<<"The numbers are: "<<endl;
for(int i=0;i<n;i++){
cout <<"The numbers "<<i<<" are "<<number[i]<< endl;}

    
    return 0;
}