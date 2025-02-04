#include<iostream>
using namespace std;
int main()
{
	/*find the average of  numbers of array */
	int n;
	int avg;
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
		sum+=arr[i];
		avg=sum/n;
	}
	cout<<"the average   of  numbers is "<<avg<<endl;
	return 0;
}