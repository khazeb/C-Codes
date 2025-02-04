#include<iostream>
using namespace std;
int main()
{
/*Reverse a number*/
int a,b,c=0;
cout<<"enter a number"<<endl;
cin>>a;

while(a>0)
{
	b=a%10;
	a=a/10;
	c=(c*10)+b;
}
cout<<"the reverse number is  "<<c;
	
	
	return 0;
}