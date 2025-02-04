#include<iostream>
using namespace std;
int main()
{
	/*Z Y X W V 
	  U T S R Q  
	  P O N M L 
	  K J I H G 
	  F E D C B */
int n=5;
char ch='Z';
for(int i=1 ;i<=n;i++)	
{
	for(int j=1;j<=n;j++)
	{
		cout<<ch<<" ";
		if(ch>'A')
		{
			ch--;
		}
		else{
			ch='A';
		}
	}
	cout<<endl;
}
	return 0;
}