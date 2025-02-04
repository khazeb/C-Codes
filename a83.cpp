#include<iostream>
using namespace std;

	/*Design a calculator using function*/
int sum(int a,int b)
{
	return a+b;
}
int sub(int c,int d)
{
	return c-d;
}
	int mul(int x,int y )
	{
		return x*y;
	}
float div(float e,float f)
{
	return e/f;
}
int main(){
float x,y;
cout<<"enter 1st number "<<endl;
cin>>x;
cout<<"enter 2nd number "<<endl;
cin>>y;
cout<<"the sum of given numbers is "<<sum(x,y)<<endl;
cout<<"the subtraction of given numbers is "<<sub(x,y)<<endl;
cout<<"the division of two numbers is "<<div(x,y)<<endl;
cout<<"the multiplication of two numbers is "<<mul(x,y)<<endl;

	return 0;
}