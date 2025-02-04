// TO PRINT ODD NUMERS FROM 1 TO 50
#include<iostream>
using namespace std;
int main ()
{  
 int n = 1;
 cout<<"odd numbers from 1 to 50 are  "<<endl;
  do 
  { 
  
  cout<<n<<" ";
  n+=2;
    }
    while (n%2==1 && n<=50);
    return 0;
    }