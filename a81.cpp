#include<iostream>
using namespace std;
int main()
{
	/*find the sum of all elements in an array */
	int n;
	int sum=0;
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
		sum=sum+arr[i];
		
	}
	cout<<"the sum of array elements is :"<<sum;
	return 0;
}