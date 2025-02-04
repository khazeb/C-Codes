#include<iostream>
using namespace std;
int main()
{
/*   * * * * *
      * * * *
	   * * *
	    * *
		 * */
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
	 	cout<<"*"<<" ";
	 }
	 cout<<endl;
 }
	return 0;}