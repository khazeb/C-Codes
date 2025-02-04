//To print the following pattern-:
//11 21 31
//12 22 32
//13 23 33
//14 24 34
//15 25 35
#include<iostream>
using namespace std;
int main ()
{

for (int i = 1; i <= 5; i++)
{
 for (int j = 1; j <= 3; j++)
 {
   cout << j << i << " " ;
 }
   cout<<endl;
}
return 0 ;
}