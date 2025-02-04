#include<iostream>
using namespace std;
int main()
{
	/*find the multiplication of  numbers of array */
	int n;
	int mul=1;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the"<<n<< "elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		mul=mul*arr[i];
	}
	cout<<"the multiplication of  numbers is "<<mul<<endl;
	return 0;
}