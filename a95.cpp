#include<iostream>
using namespace std;
int main()
{
/*   A
    A B
   A B C
  A B C D
 A  B C  D E*/
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
	 	cout<<char(j+65)<<" ";
	 }
	 cout<<endl;
 }
	return 0;}