#include<iostream>
using namespace std;
int main()
{
	/*find the sum  of a loop */
int n ;
int sum=0;
cout<<"enter the number "<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
sum =sum+i;	
}
cout<<"the sum is "<<sum<<endl;
	return 0;
}