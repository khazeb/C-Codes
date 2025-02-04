//to print minimum of two numbers using function declaration
#include<iostream>
using namespace std;

int main()
{
    int min(int,int);
    cout << "min is "<<min(3,5)<< endl;
    return 0;
}
int min (int a,int b){
if(a<b){
return a;}
else{
return b;}
}