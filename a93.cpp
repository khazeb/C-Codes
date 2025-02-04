#include<iostream>
using namespace std;
int main()
{
/*   1
    2 2
   3 3 3
  4 4 4 4
 5  5  5 5 5*/
 int i,j,k;
 for(int i=1;i<=5;i++) 
 {
 	for(int k=4;k>=i;k--)
 	{
 		cout<<" ";
	 }
	 for(int j=1;j<=i;j++)
	 {
	 	cout<<j<<" ";
	 }
	 cout<<endl;
 }
	return 0;
}