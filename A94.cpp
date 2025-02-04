#include<iostream>
using namespace std;
int main()
{
/*   A
    B B
   C C C
  D D D D
 E  E  E E E*/
 int i,j;
 int k;
 for(int i=0;i<5;i++) 
 {
 	for(int k=4;k>=i;k--)
 	{
 		cout<<" ";
	 }
	 for(int j=0;j<=i;j++)
	 {
	 	cout<<char(i+65)<<" ";
	 }
	 cout<<endl;
 }
	return 0;}