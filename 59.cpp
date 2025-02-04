// To Find the Smallest Element in an Array
#include<iostream>
#include<limits>
using namespace std;
int main()
{
int array[5]={1,-15,63,25,-98};
int size=5;
int smallest=numeric_limits<int>::max();
for(int i=0;i<size;i++){
if(array[i]<smallest){
smallest=array[i];
}
}
    cout << "Smallest:" << smallest << endl;
    return 0;
}