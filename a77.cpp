#include<iostream>
using namespace std;
int main()
{
	/*find the second largest number*/
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the"<<n<< "elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sec_max=arr[1];
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			sec_max=max;
			max=arr[i];
		}
	}
	cout<<"the  second largest  number in array is   "<<sec_max<<endl;
	return 0;
}