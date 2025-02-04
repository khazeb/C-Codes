#include<iostream>
using namespace std;
int main()
{
	/*find the second smallest number*/
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the"<<n<< "elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sec_min=arr[1];
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			sec_min=min;
			min=arr[i];
		}
	}
	cout<<"the  second smallest  number in array is   "<<sec_min<<endl;
	return 0;
}