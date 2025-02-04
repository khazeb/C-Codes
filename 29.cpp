//To print the following pattern:
//5 10 15 20 25
//4 9 14 19 24
//3 8 13 18 23
//2 7 12 17 22
//1 6 11 16 21

#include<iostream>
using namespace std;
int main ()
{
int n=5;
int x;
for (int i = n; i >= 1; i--)
{
 x=i;
 for (int j = n; j >= 1; j--)
 {
   cout<< x << " ";
   x+=n;
 }
   cout<<endl;
}
return 0 ;
}