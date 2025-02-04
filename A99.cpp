#include<iostream>
using namespace std;
int main()
{
/*   E E E E E 
      D D D D 
	   C C C 
	    B B 
		 A */
 int i,j;
 int k;
 int n=5;
 for(int i=4;i>=0;i--) 
 {
 	for(int k=3;k>=i;k--)
 	{
 		cout<<" ";
	 }
	 for(int j=i;j>=0;j--)
	 {
	 	cout<<char(i+65)<<" ";
	 }
	 cout<<endl;
 }
	return 0;}