// To Count the Occurrences of a Target Number in an Array
#include<iostream>
using namespace std;

int number(int arr[],int size,int target){
int counter=0;
for (int i=0;i<size;i++){
if(arr[i]==target){
counter++;
  }
}
return counter;}
int main()
{
    int arr[8]={5,7,9,8,5,7,3,5};
    int size = 8;
    int target =5;
    number (arr,size,target);
    cout<<number (arr, size, target)<<endl;
    return 0;
}