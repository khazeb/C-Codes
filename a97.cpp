#include<iostream>
using namespace std;
int main()
{
/*   5 5 5 5 5 
      4 4 4 4 
	   3 3 3 
	    2 2 
		 1 */
 int i,j;
 int k;
 int n=5;
 for(int i=n;i>=1;i--) 
 {
 	for(int k=n;k>=i;k--)
 	{
 		cout<<" ";
	 }
	 for(int j=i;j>=1;j--)
	 {
	 	cout<<i<<" ";
	 }
	 cout<<endl;
 }
	return 0;}