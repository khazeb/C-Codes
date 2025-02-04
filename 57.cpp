//to print arry input and output program
#include<iostream>
using namespace std;

int main()
{
int array[3];
    for (int i=0;i<3;i++){
    cout <<"enter elements of array "<<i+1<<": "<<endl;
    cin>>array[i];}
    for(int i=0;i<3;i++){
    cout<<"The elements of array "<<i+1<<" are: "<<array[i]<<endl;}
    return 0;
}